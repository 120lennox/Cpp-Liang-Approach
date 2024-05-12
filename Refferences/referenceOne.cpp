/**
 * @author: Lennox Mountain
 * References: <<House keeping reminders>>
 * references cannot be reassigned. reassigning a reference ends up assigning new value value to target value
 * references cannot be NULL. when you declare them, assign them right away
*/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void reference_test(){
    int age = 21;

    //declaring a reference with to a target age
    int& rAge = age;

    //print age before altered
    cout<<"Age before changing value at reference: "<<age<<endl;

    rAge = 12;
    //print age after
    cout<<"Age after: "<<age<<endl;

    //check if reference and and target have the same address
    cout<<"Target address: "<<&age<<endl;
    cout<<"Reference address: "<<&rAge<<endl;
}

int main(){
    reference_test();
}