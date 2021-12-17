#include <string>
#include <iostream>
#include <fstream>

#define CURL_STATICLIB
#include "curl/curl.h"

using std::string;

int main(int argv, char* argc[]){
    CURL* handle = curl_easy_init(); 

    auto res = curl_easy_setopt(handle, CURLOPT_URL, "http://example.com/");
    string inFileName;

    inFileName = argc[1];
    
    std::ifstream inFile;
    inFile.open(inFileName);
    if(!inFile.is_open()){
        std::cout << inFileName + " cannot be opened" << std::endl;
        return 0;
    }
    
    while(!inFile.eof()){
        //inFile >> ;

        if(!inFile.is_open())
            break;
    }

    inFile.close();
    return 0;
}