#pragma once

#include <string>
#include <fstream>

class FilesWork {
private:
    std::string name;
public:
    FilesWork(std::string name) : name(name) {}
    
    void write_file(std::string text);
    void read_file();
    void operator += (std::string line);
};
