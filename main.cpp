#include "header.hpp"

int main() {
    std::unordered_map<std::string, int> freq;

    // Map: word -> vector of (line_num, word_num)
    std::unordered_map<std::string, std::vector<std::pair<int, int>>> word_refs;

    std::vector <std::string> urls; 


    char choice;    
    while (true) {
        std::cout<<R"(Select:
1) to count words and find their references
2) to detect links in text
3) to do both 1) and 2)
4) to modify input file
5) to quit
--> )";
        std::cin >> choice;
        switch (choice) {

            case '1': {
                count_words(freq, word_refs);
                write_words(freq, word_refs);
                print_words(freq, word_refs);
                break;

            }

            case '2': {
                detect_urls(urls);
                write_urls(urls);
                print_urls(urls);
                break;

            }

            case '3': {
                count_words(freq, word_refs);
                write_words(freq, word_refs);
                print_words(freq, word_refs);
                
                detect_urls(urls);
                write_urls(urls);
                print_urls(urls);

                break;

            }

            case '4': {
                input_text();
                break;
            }

            case '5': {
                std::cout << "quitting..." << std::endl;
                return 0;
            }

            default: {
                std::cout << std::endl <<"Invalid input! Try again"<< std::endl<<std::endl;
            }
        }
    }
    return 0;
}