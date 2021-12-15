#include <string>
#include <iostream>
#include <fstream>

int main(int argv, char* argc[]){
    std::string inFileName;

    inFileName = argc[1];
    
    std::ifstream inFile;
    inFile.open(inFileName);
    if(!inFile.is_open()){
        std::cout << inFileName + " cannot be opened" << std::endl;
        return 0;
    }
    
    while(!inFile.eof()){
    }


    inFile.close();
    return 0;
}