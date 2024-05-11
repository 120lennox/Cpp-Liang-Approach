#include <iostream>
using namespace std;

void play(){
    int x = 2;
    int y = 5;
    int z = 90;

    int* pX = &x;
    int* pY = &y;


    cout<<"Address of pY: "<<pY<<endl;

    //the address of pY will be transfered to pX
    pX = pY;
    cout<<"Address of pX: "<<pX<<endl;

    // the content of address pY will be transfered to pX
    *pX = *pY;
    cout<<"Address of *pX: "<<*pX<<endl;

}

void custom_types(){
    //customizing datatypes using typedef keyword 
    typedef int integer;
    integer number = 10;

    typedef int* integerPointer;
    integerPointer pNum = &number;
    cout<<number<<endl;
    cout<<number<<endl;

}

void testPointers(){
    int count = 0;

    //declaring a pointer 
    int* pcount;

    //getting the address of count 
    pcount = &count;

    cout<<"Value of count: "<<count<<endl;
    cout<<"Value of pcount: "<<pcount<<endl;
    cout<<"Value of &count: "<<&count<<endl;
    cout<<"Value of *count: "<<*pcount<<endl;
}
int main(){
    play();
}