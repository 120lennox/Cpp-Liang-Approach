#include <iostream>
using namespace std;

void play(){
    int x = 2;
    int y = 5;

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