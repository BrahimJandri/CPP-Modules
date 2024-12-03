#include "readFile.hpp"

void file::setStrings(const std::string &fileName, const std::string &s1, const std::string &s2)
{
    this->fileName = fileName;
    this->s1 = s1;
    this->s2 = s2;
}

void file::replaceStringInFile()
{
    std::ifstream inputFile(this->fileName.c_str());
    if (!inputFile.is_open())
    {
        std::cerr << "Error Opening the file" << std::endl;
        return;
    }

    std::string content;
    std::string line;
    while (std::getline(inputFile, line))
    {
        content += line + "\n"; // Read the entire file into content
    }
    inputFile.close();

    std::string newFilename = this->fileName + ".replace"; // Use this->fileName
    std::ofstream outputFile(newFilename.c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error: Could not create the file " << newFilename << " for writing!" << std::endl;
        return;
    }

    size_t pos = 0;
    while ((pos = content.find(this->s1, pos)) != std::string::npos)
    {                                         // Use this->s1
        outputFile << content.substr(0, pos); // Write content before s1
        outputFile << this->s2;               // Write s2
        pos += this->s1.length();             // Move past the found s1
        content = content.substr(pos);        // Update content to remove processed part
        pos = 0;                              // Reset pos to search in the updated content
    }
    outputFile << content; // Write any remaining content
    outputFile.close();
    std::cout << "Replacement completed: " << newFilename << " created." << std::endl;
}