#include <iostream>
using namespace std;

int main(){
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