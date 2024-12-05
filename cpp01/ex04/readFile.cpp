#include "readFile.hpp"

int file::setStrings(const std::string &fileName, const std::string &s1, const std::string &s2)
{
    if (s1.empty() || s2.empty())
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

    std::string newFilename = this->fileName + ".replace";
    std::ofstream outputFile(newFilename.c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error: Could not create the file " << newFilename << " for writing!" << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        std::string result;
        size_t pos = 0;
        while (pos < line.size())
        {
            size_t found = line.find(s1, pos);
            if (found != std::string::npos)
            {
                result += line.substr(pos, found - pos);
                result += s2;
                pos = found + s1.length();
            }
            else
            {
                result += line.substr(pos);
                break;
            }
        }
        outputFile << result << '\n';
    }
    inputFile.close();
    outputFile.close();
    std::cout << "Replacement completed: " << newFilename << " created." << std::endl;
}