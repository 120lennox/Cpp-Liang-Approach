/**
 * contains functions describing constant pointers 
 * @author: Lennox Mountain
*/

#include <iostream>
using namespace std;

void const_ptr_one(){
    int number = 10;
    int age = 40;

    
    /*
    defined is not a constant pointer, but the value the pointer is pointing is what is constant 
    */ 
    const int* pNum = &number;

    // *Num = 20; this one here throws an error 

    // the pointer is not constant hence it can change
    pNum = &age;

    //to declare a constant pointer proceed as follows 
    double count = 0;
    double decimal = 12.33;

    //constant pointer 
    double* const pCount = &count;

    //this way you cannot change the address of the pointer 
    // pCount = &decimal;

    //but you can change the data the pointer is pointing to 
    *pCount = 22.99;

    //to make both pointer and data it is pointing to constant, proceed as follows 
    float dates = 12;
    float groups = 100;

    const float* const pDates = &dates;

    //this way you cannot alter with both the pointer and the data it is pointing to 
}

int main(){
    const_ptr_one();
}