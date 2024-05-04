#include <iostream>
#include <fstream>
using namespace std;

/**
 * @author: Lennox Mountain
 * check_file: user enters the name of file and check if the file exists. if it exists proceed with other operations
*/
void check_file(){    
    string filename;
    //user enters name of file
    cout<<"Enter file: ";
    cin>>filename;

    //input object
    ifstream input(filename.c_str());

    if (!input.fail()){
        cout<<"file opened \n";
    }
    else{
        cout<<"file does not exist \n";
    }
}

int main(){
    check_file();
}