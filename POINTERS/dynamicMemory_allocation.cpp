#include <iostream>
#include <string>

using namespace std;

int main(){
    string reg_number = "bed-com-03-21";

    //declaring a pointer
    string* pReg_number = new string;

    cout<<pReg_number<<endl;
    delete pReg_number;
    pReg_number = nullptr;
    cout<<pReg_number<<endl; 
}