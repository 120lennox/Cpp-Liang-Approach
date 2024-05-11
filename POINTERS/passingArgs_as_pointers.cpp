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

