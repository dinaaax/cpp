#include "FilesWork.h"
#include <iostream>

void FilesWork::write_file(std::string text) {
    std::ofstream outfile(name);
    if(outfile.is_open()) outfile << text;
    outfile.close();
}

void FilesWork::read_file() {
    std::ifstream infile(name);
    if(infile.is_open()) {
        std::string text;
        while(std::getline(infile, text)) {
            std::cout << text << std::endl;
        }
        infile.close();
    }
}

void FilesWork::operator += (std::string line) {
    std::ofstream outfile(name, std::ios_base::app);
    if(outfile.is_open()) outfile << line << std::endl;
    outfile.close();
}




