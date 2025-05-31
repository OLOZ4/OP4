#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <string>
#include <cctype>
#include <algorithm>
#include <vector>
#include <regex>

bool isUnicodeDash(const std::string& str, size_t pos, size_t& dashLen);

std::string clean_punct(const std::string& word);

std::string clean_punct1(const std::string& word);

std::string removePunctuations(std::string& s);

std::string remove_trailing_punct(const std::string& url);

std::string find_url(const std::string& word);

void input_text();

void count_words(std::unordered_map<std::string, int>& freq, std::unordered_map<std::string, std::vector<std::pair<int, int>>>& word_refs);

void write_words(std::unordered_map<std::string, int> freq, std::unordered_map<std::string, std::vector<std::pair<int, int>>> word_refs);

void print_words(std::unordered_map<std::string, int> freq, std::unordered_map<std::string, std::vector<std::pair<int, int>>> word_refs);

void detect_urls(std::vector <std::string>& urls);

void cleanup_urls(std::vector <std::string>& urls);

void write_urls(std::vector <std::string> urls);

void print_urls(std::vector <std::string> urls);