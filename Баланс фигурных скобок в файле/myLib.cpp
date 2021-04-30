#include "header.hpp"
#include <iostream>
#include <fstream>


void readSymbol (std::fstream& fout, char* arr)
{
    char c;
    size_t i = 0;
    
    while((c = fout.get()) != EOF){
        if(c == '{' || c == '}') {
            arr[i] = c; i++;
        } 
    }
    arr[i] = '\0';
}

int checkBalance (char* str)
{
    ssize_t counter = 0, i = 0;
    while(str[i] != '\0') {
        if(str[i] == '{') counter++;
        else counter--;
        if(counter < 0) break;
        i++;
    }

}