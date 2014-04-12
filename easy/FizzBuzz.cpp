//
//  main.cpp
//  codeEval
//
//  Created by 奥山洋平 on 2014/04/12.
//  Copyright (c) 2014年 okuyama. All rights reserved.
//

#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

vector<string> split(const string &str, char delim)
{
    vector<string> res;
    size_t current = 0, found;
    while((found = str.find_first_of(delim,current))!=string::npos){
        res.push_back(string(str,current,found - current));
        current = found + 1;
    }
    res.push_back(string(str,current, str.size()-current));
    return res;
}

int main(int argc, const char * argv[])
{
    string lineBuffer;
    ifstream file;
    file.open(argv[1]);
    vector<string> lines;
    
    while (file && getline(file,lineBuffer)) {
        if(lineBuffer.length()==0)continue;
        lines = split(lineBuffer, ' ');
        
        int fizz = stoi(lines[0]);
        int buzz = stoi(lines[1]);
        for(int i=1;i<=stoi(lines[2]);i++){
            if(i>1) cout << " ";
            if(i%fizz==0 && i%buzz==0) cout << "FB";
            else if(i%fizz == 0) cout << "F";
            else if(i%buzz == 0) cout << "B";
            else cout << i;
        }
        cout << endl;
    }
    
    return 0;
}