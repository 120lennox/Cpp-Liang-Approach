/**
 * @author: Lennox Mountain
 * has functions showing different declarations of pointer and arrays 
*/

#include <iostream>
#include <string>
using namespace std;


/**
 * arr_is_pointer: proves that an array name is a pointer to first element of an array
*/
void arr_is_pointer(){
    int list[] = {1, 2, 3, 5, 6, 7};

    //first proof, print the array name, you get the address of the first element 
    cout<<"address is "<<list<<endl;

    //to access the individual elements int the array, we access them just the way we access the regular values in the pointer 
    //you remember how ? *pName. 
    //Now lets print the all the values of the pointer without using  the loop. 
    cout<<"Elements in list: "<<*(list)<<", "<< *(list + 1)<<", "<< *(list + 2)<<", "<< *(list + 3)<<", "<< *(list + 4)<<", "<< *(list + 5)<<endl;
}

/**
 * this function defines an array pointer
*/
void array_pointers(){
    char* names[] = {"Lenox", "Josh", "Tim"};
   cout<<"What is names[0]"<<names[0][0]<<endl; 
}

//Refferences
void refferences(){
    int number = 12;
    int& rNumber = number;
    rNumber = 23345;
    cout<<"The value of number is: "<<number<<endl;
    
}

int main(){
    //arr_is_pointer();
    //array_pointers();
    refferences();
}