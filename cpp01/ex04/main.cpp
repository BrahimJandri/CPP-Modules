#include "readFile.hpp"

int main(int argc, char *argv[])
{
    file f;
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    f.setStrings(argv[1], argv[2], argv[3]);
    f.replaceStringInFile();

    return 0;
}