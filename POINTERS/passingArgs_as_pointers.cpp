/**
 * @author: Lennox Mountain
 * 
*/
#include <iostream>
#include <string>
using namespace std;

/**
 * swapBy_value: takes values and swap them 
*/
void swapBy_value(int value1, int value2){
    int temp = value1;
    value1 = value2;
    value2 = temp;
}

/*
swapBy_reference: swaps by reference 
*/
void swapBy_reference(int& value1, int& value2){
    int temp = value1;
    value1 = value2;
    value2 = temp;
}

/**
 * swapBy_pointer: swaps by pointer
*/

void swapBy_pointer(int* value1, int* value2){
    int* temp = value1;
    value1 = value2;
    value2 = temp;
}

/**
 * Main: tests the results 
*/

int main(){
    int num1 = 5; 
    int num2 = 10;

    // cout<<"Value of num1 before swap: "<<num1<<endl;
    // cout<<"Value of num2 before swap: "<<num2<<endl;

    // swapBy_value(num1, num2);
    // cout<<"Value of num1 after swap: "<<num1<<endl;
    // cout<<"Value of num2 after swap: "<<num2<<endl;

    // swapBy_reference(num1, num2);
    // cout<<"Value of num1 after swap: "<<num1<<endl;
    // cout<<"Value of num2 after swap: "<<num2<<endl;

    int* pNum = &num1;
    int* pNum2 = &num2;
    cout<<"------------------Before Swapping----------------------"<<endl;
    cout<<"Value of num1 after swap: "<<num1<<endl;
    cout<<"Value of num2 after swap: "<<num2<<endl;
    cout<<"Value of pointer 1 before swapping: "<<pNum<<endl;
    cout<<"Value of pointer 2 before swapping: "<<pNum2<<endl;
    swapBy_pointer(pNum, pNum2);
    cout<<"------------------POINTERS after Swapping----------------------"<<endl;
    cout<<"Value of num1 after swap: "<<num1<<endl;
    cout<<"Value of num2 after swap: "<<num2<<endl;
    cout<<"Value of pointer 1 after swapping: "<<pNum<<endl;
    cout<<"Value of pointer 2 after swapping: "<<pNum2<<endl;
}