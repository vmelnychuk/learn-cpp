#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>
#include <vector>

void read(std::istream& in, std::vector<std::string>& text) {
    std::string line;
    while (std::getline(in, line)) {
        text.push_back(line);
    }
}

void print_usage() {
    std::cout << "usage: ./list <file-name> or ./list" << std::endl;
}

int main(int argc, char* argv[]) {

    std::vector<std::string> text;

    if (argc == 1) {
        read(std::cin, text);
    } else if (argc == 2) {
        std::ifstream in(argv[1]);
        if (not in) {
            std::perror(argv[1]);
            return EXIT_FAILURE;
        }
        read(in, text);
    } else {
        print_usage();
        return 1;
    }
    
    std::sort(text.begin(), text.end());

    std::copy(text.begin(), text.end(),
                std::ostream_iterator<std::string>(std::cout, "\n"));
    
    return 0;
}
