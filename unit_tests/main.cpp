#include "catch.hpp"
#include "../header.hpp"
#define CATCH_CONFIG_MAIN
#include <fstream>
#include <unordered_map>
#include <vector>
#include <utility>
#include <cstdio> // for remove()
#include <regex>

// Test isUnicodeDash
TEST_CASE("isUnicodeDash detects en and em dash") {
    size_t dashLen;
    // en dash
    std::string str_en = "\xE2\x80\x93";
    REQUIRE(isUnicodeDash(str_en, 0, dashLen));
    REQUIRE(dashLen == 3);

    // em dash
    std::string str_em = "\xE2\x80\x94";
    REQUIRE(isUnicodeDash(str_em, 0, dashLen));
    REQUIRE(dashLen == 3);

    // normal dash
    std::string str_dash = "-";
    REQUIRE_FALSE(isUnicodeDash(str_dash, 0, dashLen));

    // not enough length
    std::string short_str = "\xE2\x80";
    REQUIRE_FALSE(isUnicodeDash(short_str, 0, dashLen));
}

// Test clean_punct
TEST_CASE("clean_punct removes punctuation and lowercases") {
    REQUIRE(clean_punct("Hello!") == "hello");
    REQUIRE(clean_punct("Test.") == "test");
    REQUIRE(clean_punct("123,456") == "123456");
    REQUIRE(clean_punct("NO$PUNCT") == "nopunct");
    REQUIRE(clean_punct("") == "");
}

// Test clean_punct1
TEST_CASE("clean_punct1 removes punctuation, unicode dashes, and lowercases") {
    REQUIRE(clean_punct1("Hello!") == "hello");
    REQUIRE(clean_punct1("en–dash") == "endash");
    REQUIRE(clean_punct1("em—dash") == "emdash");
    REQUIRE(clean_punct1("x-y") == "xy");
    REQUIRE(clean_punct1("Test-—–!") == "test");
    REQUIRE(clean_punct1("") == "");
}

// Test removePunctuations
TEST_CASE("removePunctuations removes punctuation") {
    std::string s = "He!llo,";
    REQUIRE(removePunctuations(s) == "Hello");
    REQUIRE(s == "Hello"); // in-place

    s = "No.Punctuation";
    REQUIRE(removePunctuations(s) == "NoPunctuation");
    REQUIRE(s == "NoPunctuation");

    s = "";
    REQUIRE(removePunctuations(s) == "");
    REQUIRE(s == "");
}

// Test remove_trailing_punct
TEST_CASE("remove_trailing_punct removes trailing punctuation") {
    REQUIRE(remove_trailing_punct("abc.com,") == "abc.com");
    REQUIRE(remove_trailing_punct("abc.com.") == "abc.com");
    REQUIRE(remove_trailing_punct("abc.com!?") == "abc.com");
    REQUIRE(remove_trailing_punct("abc.com") == "abc.com");
    REQUIRE(remove_trailing_punct("") == "");
}

// Test find_url
TEST_CASE("find_url finds urls and removes trailing punctuation") {
    REQUIRE(find_url("https://example.com,") == "https://example.com");
    REQUIRE(find_url("Visit www.example.com!") == "www.example.com");
    REQUIRE(find_url("foo.bar/path:") == "foo.bar/path"); // trailing :
    REQUIRE(find_url("not_a_url") == "");
    REQUIRE(find_url("http://abc.com/path?x=1.") == "http://abc.com/path?x=1");
    REQUIRE(find_url("Check abc.co.uk!") == "abc.co.uk");
}

// Test count_words end-to-end (file IO)
// Uses clean_punct1, so test unicode dashes and punctuation
TEST_CASE("count_words counts words and tracks references") {
    // Write a test input file
    std::ofstream out("input.txt");
    out << "Hello, world! hello--world.\n";
    out << "Test—case test–case test-case.\n"; // em dash, en dash, hyphen
    out.close();

    std::unordered_map<std::string, int> freq;
    std::unordered_map<std::string, std::vector<std::pair<int, int>>> refs;
    count_words(freq, refs);

    // Words should be: hello, world, helloworld, testcase, testcase, testcase
    REQUIRE(freq["hello"] == 1);
    REQUIRE(freq["world"] == 1);
    REQUIRE(freq["helloworld"] == 1);
    REQUIRE(freq["testcase"] == 3);

    // Reference checks
    REQUIRE(refs["testcase"].size() == 3);

    // Clean up
    std::remove("input.txt");
}

// Test write_words
TEST_CASE("write_words writes words with count > 1 to output.txt and refs.txt") {
    std::unordered_map<std::string, int> freq = {{"apple", 2}, {"banana", 1}, {"pear", 3}};
    std::unordered_map<std::string, std::vector<std::pair<int, int>>> refs = {
        {"apple", {{1,1},{2,2}}},
        {"banana", {{1,2}}},
        {"pear", {{1,3},{2,4},{3,5}}}
    };

    write_words(freq, refs);

    // Check output.txt
    std::ifstream in("output.txt");
    std::string out;
    std::getline(in, out);
    REQUIRE((out == "apple 2" || out == "pear 3"));
    std::getline(in, out);
    REQUIRE((out == "apple 2" || out == "pear 3"));
    in.close();

    // Check refs.txt
    std::ifstream in2("refs.txt");
    std::string line;
    std::getline(in2, line);
    // apple: (1,1) (2,2)  or pear: (1,3) (2,4) (3,5)
    bool found = (line.find("apple:") != std::string::npos || line.find("pear:") != std::string::npos);
    REQUIRE(found);
    in2.close();

    // Clean up
    std::remove("output.txt");
    std::remove("refs.txt");
}

// Test detect_urls and cleanup_urls
TEST_CASE("detect_urls and cleanup_urls find and clean urls from input.txt") {
    std::ofstream out("input.txt");
    out << "Go to https://github.com and www.example.com.\n";
    out << "No url here.\n";
    out << "foo.bar/path, not_a_url\n";
    out.close();

    std::vector<std::string> urls;
    detect_urls(urls);

    // Should find 3 urls (no empty strings)
    REQUIRE(urls.size() == 3);
    std::remove("input.txt");
}

// Test remove_trailing_punct with edge cases
TEST_CASE("remove_trailing_punct edge cases") {
    REQUIRE(remove_trailing_punct(".") == "");
    REQUIRE(remove_trailing_punct(",,,") == "");
    REQUIRE(remove_trailing_punct("abc.,!") == "abc");
    REQUIRE(remove_trailing_punct("abc") == "abc");
    REQUIRE(remove_trailing_punct("") == "");
}