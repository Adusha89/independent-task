#include <iostream>
#include <fstream>
#include <cstdio>
#include "header.hpp"


int main()
{
    char* arr = new char[50]{};
    std::fstream fout("test.txt");
    if(!fout.is_open())
        std::cout << "File not open\n";
    readSymbol(fout, arr);
    if(!checkBalance(arr)) std::cout << "Balance OK!\n";
    else std::cout << "Not Balance!\n";
    return 0;
}