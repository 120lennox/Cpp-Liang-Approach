#include <iostream>
#include <fstream>
using namespace std;
//simple getline structure 

int main(){
    ifstream input;

    input.open("testFile.txt");
    string name;

    if (!input.fail()){
        while(!input.eof()){
            getline(input, name);
            cout<<name<<endl;
        }
    }
}