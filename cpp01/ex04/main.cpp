#include "readFile.hpp"

int main(int argc, char *argv[])
{
    file f;
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    f.fileName = argv[1];
    f.s1 = argv[2];
    f.s2 = argv[3];

    try
    {
        std::string content = readFile(filename);
        std::string modifiedContent = replaceString(content, s1, s2);
        writeFile(filename, modifiedContent);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}
