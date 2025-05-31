#include "../header.hpp"
#include <fstream>

using std::endl;

bool isUnicodeDash(const std::string &str, size_t pos, size_t &dashLen) {
  // UTF-8 of en dash (–) is 0xE2 0x80 0x93
  // UTF-8 of em dash (—) is 0xE2 0x80 0x94
  if (pos + 2 < str.size() && (unsigned char)str[pos] == 0xE2 &&
      (unsigned char)str[pos + 1] == 0x80 &&
      ((unsigned char)str[pos + 2] == 0x93 ||
       (unsigned char)str[pos + 2] == 0x94)) {
    dashLen = 3;
    return true;
  }
  return false;
}

std::string clean_punct(const std::string& word) {
    std::string result;
    for (char c : word) {
        if (!std::ispunct(static_cast<unsigned char>(c))) {
            result += std::tolower(static_cast<unsigned char>(c));
        }
    }
    return result;
}

std::string clean_punct1(const std::string& word) {
    std::string result;
    for (size_t i = 0; i < word.size(); ) {
        size_t dashLen = 0;
        if (isUnicodeDash(word, i, dashLen)) {
            i += dashLen;
            continue;
        }
        unsigned char c = word[i];
        if (!std::ispunct(c) && c != '-') {
            result += std::tolower(c);
        }
        ++i;
    }
    return result;
}


std::string removePunctuations(std::string& s) {
    std::string result = "";
    for (char c : s) {
        if (!ispunct(c)) { // If c is not a punctuation character
            result += c;
        }
    }
    s = result;
    return s;
}

std::string remove_trailing_punct(const std::string& url) {
    size_t end = url.find_last_not_of(".,;:!?") + 1;
    return url.substr(0, end);
}

std::string find_url(const std::string& word) {
    std::regex url_regex(R"((https?:\/\/[^\s]+)|(www\.[^\s]+)|([a-zA-Z0-9.-]+\.[a-zA-Z]{2,}(\/[^\s]*)?))");
    auto words_begin = std::sregex_iterator(word.begin(), word.end(), url_regex);
    auto words_end = std::sregex_iterator();

    std::string result;
    for (auto i = words_begin; i != words_end; ++i) {
        if (!result.empty()) result += ", ";
        result += i->str();
    }
    return remove_trailing_punct(result); // returns "" if none found
}


void input_text() {
    std::ofstream outfile("input.txt"); // Change filename as needed
    if (!outfile) {
        std::cerr << "Failed to open file for writing.\n";
        return;
    }

    std::cout << "Paste your text below. Press Enter on an empty line to finish:\n";

    std::string line;
    std::cin >> line;
    while (true) {
        std::getline(std::cin, line);
        if (line.empty()) {
            break; // User pressed Enter on an empty line
        }
        outfile << line << std::endl;
    }

    std::cout << "Text saved to input.txt" << std::endl << endl;
}

void count_words(std::unordered_map<std::string, int>& freq, std::unordered_map<std::string, std::vector<std::pair<int, int>>>& word_refs) {
    std::ifstream in("input.txt");

    freq.clear();
    word_refs.clear();
    std::string line, word;

    int line_num = 1;
    int word_num = 1;

    while (std::getline(in, line)) {
        
        std::istringstream iss(line);
        while (iss >> word) {
            //std::string cleaned = clean_punct(word);
            std::string cleaned = clean_punct1(word);
            //urls.emplace_back(find_url(word));
            //std::string cleaned = removePunctuations(word);
            if (!cleaned.empty()) {

                ++freq[cleaned];
                word_refs[cleaned].emplace_back(line_num,word_num);
                //std::cout << "Line: "<<line_num <<" Number: " <<word_num <<" Word: " << cleaned << std::endl;
                word_num++;
            }
        }
        line_num++;
        word_num = 1;
    }
    in.close();
}

void write_words(std::unordered_map<std::string, int> freq, std::unordered_map<std::string, std::vector<std::pair<int, int>>> word_refs) {
    

    std::cout<< "Writing word counts to output.txt"<<std::endl;
    std::ofstream out("output.txt");

    for (const auto& p : freq) {
        if (p.second > 1) {
            out << p.first << " " << p.second << "\n";
        }
        
    }
    out.close();
    std::cout<< "Word counts were written successfully to output.txt!"<<std::endl;

    std::cout<< "Writing word references to refs.txt"<<std::endl;
    std::ofstream out1("refs.txt");

    for (const auto& [word,pos] : word_refs){
        if (pos.size()!= 1) {
            out1 << word <<": ";
            for (int i = 0; i < pos.size(); i++) {
                out1<< " (" << pos[i].first << ","<<pos[i].second << ") "; 
            }
            
            out1 << std::endl;
        }

    }   
    out1.close();
    std::cout<< "Word references were written successfully to refs.txt!"<<std::endl;

}

void print_words(std::unordered_map<std::string, int> freq, std::unordered_map<std::string, std::vector<std::pair<int, int>>> word_refs) {
    std::cout<<"Do you want to print to terminal? (Y/N)"<<std::endl;
    std::string choice;

    while (true) {
        std::cin >> choice;

        if (choice == "Y" || choice == "y") {
            std::cout<<"Printing word counts:"<<std::endl;
            std::cout<<"----------------------------------"<<std::endl<<endl;
            for (const auto& p : freq) {
                if (p.second > 1) {
                    std::cout << p.first << " " << p.second << "\n";
                }
            }
            std::cout<<"Printing word references:"<<std::endl;
            std::cout<<"----------------------------------"<<std::endl<<endl;
            for (const auto& [word,pos] : word_refs){
                if (pos.size()!= 1) {
                    std::cout << word <<": ";
                    for (int i = 0; i < pos.size(); i++) {
                        std::cout<< " (" << pos[i].first << ","<<pos[i].second << ") "; 
                    }
                    std::cout << std::endl;
                }
            }
        break;
        }

        if (choice == "N" || choice == "n") {
            break;
        }

        else {
            std::cout<<"Wrong input, try again!"<<std::endl;
            continue;
        }
    }
}

void detect_urls(std::vector <std::string>& urls) {
    std::ifstream in("input.txt");
    urls.clear();
    
    std::string line, word;

    while (std::getline(in, line)) {
        
        std::istringstream iss(line);
        while (iss >> word) {
            std::string cleaned = clean_punct1(word);
            urls.emplace_back(find_url(word));
        }
    }
    in.close();

    cleanup_urls(urls);
}

void cleanup_urls(std::vector <std::string>& urls) {
     for (const auto& url : urls) {
        if (url == "") urls.pop_back();
    }
}

void write_urls(std::vector <std::string> urls) {
    std::cout<< "Writing ulrs to ulrs.txt"<<std::endl;
    std::ofstream out("urls.txt");

    for (const auto& url : urls) {
        out << url << std::endl;    
    }

    out.close();
    std::cout<<"Urls were written successfully to urls.txt!"<<std::endl;
}

void print_urls(std::vector <std::string> urls) {
    std::cout<<"Do you want to print to terminal? (Y/N)"<<std::endl;
    std::string choice;

    while (true) {
        std::cin >> choice;

        if (choice == "Y" || choice == "y") {
            std::cout<<"Printing word counts:"<<std::endl;
            std::cout<<"----------------------------------"<<std::endl<<endl;
            for (const auto& url : urls) {
                std::cout << "Found URL: " << url << std::endl;
            }
        break;
        }

        if (choice == "N" || choice == "n") {
            break;
        }

        else {
            std::cout<<"Wrong input, try again!"<<std::endl;
            continue;
        }
    }
}