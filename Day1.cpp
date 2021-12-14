#include <string>
#include <iostream>
#include <fstream>

int main(int argv, char* argc[]){
    if(argv < 2)
        return 0;

    std::string inFileName;
    std::string outFileName;

    inFileName = argc[1];
    
    if(argv == 3)
        outFileName = argc[2];
    else
        outFileName = "output.txt";
    
    std::ifstream inFile;
    inFile.open(inFileName);
    if(!inFile.is_open()){
        std::cout << inFileName + " cannot be opened" << std::endl;
        return 0;
    }
    
    std::ofstream outFile;
    outFile.open(outFileName);

    std::string inStr;
    while(!inFile.eof()){
        inFile >> inStr;
        if(inFile.eof())
            break;
        
        
    }

    inFile.close();
    outFile.close();
    return 0;
}