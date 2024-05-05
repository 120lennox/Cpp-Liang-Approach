#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/**
 * @author: Lennox Mountain
 * check_existence: categorise people into groups
*/

void check_existence(){
    string filename;
    string group;

    int counter = 0;
    int group_limit;
    int group_number = 0;

    cout<<"Enter file name: ";
    cin>>filename;
    cout<<"Enter group limit: ";
    cin>>group_limit;

    ifstream input(filename.c_str());
    if (input.fail()){
        cout<< "Error! file does not exists";
    }
    else{
        while(getline(input, group)){
            if (counter == 0){
                group_number++;
                cout<<"Group Number "<<group_number<<endl;
            }
            counter++;
            cout<<group<<endl;
            if (counter == group_limit){
                counter = 0;
                cout<<"\n";
                cout<<"\n";
            }
        }
    }

}

int main(){
    check_existence();
}