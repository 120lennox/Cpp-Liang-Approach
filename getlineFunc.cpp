#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//simple getline structure 

int main(){
    ifstream input;
    string name;

    input.open("testFile.txt");
    if (input.fail()){
        cout<<"file does not exist \n";
    }
    else{
        while(getline(input, name)){
            cout<<name<<endl;
        }
    }
    input.close();
}