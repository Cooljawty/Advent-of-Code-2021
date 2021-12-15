#include <string>
#include <iostream>
#include <fstream>

int main(int argv, char* argc[]){
    std::string inFileName;
    std::string outFileName;

    inFileName = argc[1];
    
    std::ifstream inFile;
    inFile.open(inFileName);
    if(!inFile.is_open()){
        std::cout << inFileName + " cannot be opened" << std::endl;
        return 0;
    }
    
    unsigned int prevDepths[4];
    unsigned int depthCount = 0;
    int depth;
    for(int i = 0; !inFile.eof(); i++){
        inFile >> depth;
        if(inFile.eof())
            break;
        
        prevDepths[i%4] = depth;

        if(i >= 3 && prevDepths[(i-3)%4] < prevDepths[i%4])
            depthCount++;
    }

    std::cout << depthCount << std::endl;

    inFile.close();
    return 0;
}