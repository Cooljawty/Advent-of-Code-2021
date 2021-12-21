#include <string>
#include <iostream>
#include <fstream>
#include <math.h>
#include <bitset>

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

    const int BITSIZE = 12;
    unsigned int gammaAve[BITSIZE] = {0};
    unsigned int inputCount = 0;
    while(!inFile.eof()){
        std::bitset<BITSIZE> power;
        inFile >> power;
        for(int i = 0; i < BITSIZE; i++){
            if(power[i])
                gammaAve[i]++; 
        }
    
        if(!inFile.is_open())
            break;
        else
            inputCount++;
    }
    inputCount--;

    std::bitset<BITSIZE> gamma;
    for(int i = 0; i < BITSIZE; i++){
        gamma[i] = gammaAve[i] > inputCount / 2.f;
    }   
    std::cout << gamma.to_ulong() << " " << (~gamma).to_ulong() << " "  
            << gamma.to_ulong() * (~gamma).to_ulong()<< std::endl;
    inFile.close();
    return 0;
}