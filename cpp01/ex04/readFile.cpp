#include "readFile.hpp"

int file::setStrings(const std::string &fileName, const std::string &s1, const std::string &s2)
{
    if(s1.empty() || s2.empty())
    {
        std::cerr << "String cannot be empty" << std::endl;
        return 1;
    }
    this->fileName = fileName;
    this->s1 = s1;
    this->s2 = s2;
    return 0;
}

void file::replaceStringInFile()
{
    std::ifstream inputFile(this->fileName.c_str());
    if (!inputFile.is_open())
    {
        std::cerr << "Error opening the file: " << this->fileName << std::endl;
        return;
    }

    std::string content;
    std::string line;
    while (std::getline(inputFile, line))
    {
        content += line + "\n";
    }
    inputFile.close();

    std::string newFilename = this->fileName + ".replace";
    std::ofstream outputFile(newFilename.c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error: Could not create the file " << newFilename << " for writing!" << std::endl;
        return;
    }

    size_t pos = 0;
    while ((pos = content.find(this->s1, pos)) != std::string::npos)
    {
        outputFile << content.substr(0, pos);
        outputFile << this->s2;
        pos += this->s1.length();
        content = content.substr(pos);
        pos = 0;
    }
    outputFile << content;
    outputFile.close();
    std::cout << "Replacement completed: " << newFilename << " created." << std::endl;
}