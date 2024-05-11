/**
 * contains functions describing constant pointers 
 * @author: Lennox Mountain
*/

#include <iostream>
using namespace std;

void const_ptr_one(){
    int number = 10;

    //const ptr
    const int* pNum = &number;

    //Value of number can change 
    number = 20;

    cout<<"number "<<number<<endl;
    cout<<"pNum: "<<pNum<<endl;
}

void const_ptr_two(){
    //here you can make data being referenced constant too
    double number = 12;
    double decimal = 22.45;
    const double* pNumber = &number;

    

    cout<<number<<endl;
}

int main(){
    //const_ptr_one();
    const_ptr_two();
}