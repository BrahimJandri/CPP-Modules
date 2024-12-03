#ifndef READFILE_HPP
#define READFILE_HPP

#include <iostream>
#include <fstream>

class file
{
    std::string fileName;
    std::string s1;
    std::string s2;

public:
    void setStrings(const std::string &fileName, const std::string &s1, const std::string &s2);
    void replaceStringInFile(void);
};

#endif