#include <string>
#include <iostream>
#include <fstream>

using std::string;

int main(int argv, char* argc[]){
    string inFileName;

    inFileName = argc[1];
    
    std::ifstream inFile;
    inFile.open(inFileName);
    if(!inFile.is_open()){
        std::cout << inFileName + " cannot be opened" << std::endl;
        return 0;
    }
    
    int depth = 0;
    int position = 0;
    while(!inFile.eof()){
        string direction;
        int magnitude;

        std::cin >> direction >> magnitude;

        
    }


    inFile.close();
    return 0;
}