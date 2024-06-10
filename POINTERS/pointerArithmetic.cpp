#include <iostream>
#include <string>

using namespace std;

/*
if you increment or decrement the pointer, the memory address changes but the value in the memery address remains the same.
*/
void ptr_arithmetic(){
    int number = 12;
    int age = 20;

    int* pNumber = &number;
    int* pAge = &age;

    //print initial results
    cout<<"number before: "<<number<<endl;
    cout<<"age before: "<<age<<endl;
    cout<<"number address before: "<<pNumber<<endl;
    cout<<"age address before: "<<pAge<<endl;

    //alteration
    pNumber = pNumber + 1;
    pAge = pAge + 1;
    
    //print after alteration
    cout<<"___-----------__________---------________-------"<<endl;
    cout<<"number after: "<<number<<endl;
    cout<<"age after: "<<age<<endl;
    cout<<"number address after: "<<*pNumber<<endl;
    cout<<"age address after: "<<*pAge<<endl;
    //the values of age and number wont be the same because now because the pointer points to another different value

}

//addition pointer arithmetic 
void add_ptr_arithmetic(){

}

int main(){
    ptr_arithmetic();
}