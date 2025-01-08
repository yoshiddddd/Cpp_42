#include "Replace.hpp"

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cout << "Error: Invalid number of arguments" << std::endl;
        return 1;
    }
    Replace(argv[1],argv[2],argv[3]);
}