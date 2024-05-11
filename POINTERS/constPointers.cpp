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

    //you can change the address of pNumber
    pNumber = &decimal; //pNumber is not constant

    // but you cannot change the data pNumber is pointing to because it is constant 

    //*pNumber = decimal; 

    // here you get an error because the data being referenced to is constant

    //However you can make both the pointer and the data it references a pointer too. Here is how
    int age = 20;
    int age2 = 25;

    const int* const pAge = &age;
    //in this approach you cannot the change the address of the pointer and the data it points like

    // *pAge = age2;
    // pAge = &age;
    
    //all this is wring 

    cout<<number<<endl;
}

int main(){
    //const_ptr_one();
    const_ptr_two();
}