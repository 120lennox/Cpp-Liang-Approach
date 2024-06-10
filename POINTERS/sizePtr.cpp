#include <iostream>
using namespace std;

int main(){
    short num = 34;
    long number = 34;
    int numb = 34;
    bool is = false;
    short* pShort = &num;
    long* pLong = &number;
    int* pInt = &numb;
    float* pFloat = nullptr;
    double* pDouble = nullptr;
    char* pChar = nullptr;
    bool* pBool = nullptr;

    cout<<"size of short: "<<sizeof(pShort)<<endl;
    cout<<"size of long: "<<sizeof(pLong)<<endl;
    cout<<"size of Int: "<<sizeof(pInt)<<endl;
    cout<<"size of Float: "<<sizeof(pFloat)<<endl;
    cout<<"size of Double: "<<sizeof(pDouble)<<endl;
    cout<<"size of Char: "<<sizeof(pChar)<<endl;
    cout<<"size of Bool: "<<sizeof(pBool)<<endl;

    cout<<"size of var short: "<<sizeof(num)<<endl;
    cout<<"size of long: "<<sizeof(number)<<endl;
    cout<<"size of int: "<<sizeof(numb)<<endl;
    cout<<"size of bool: "<<sizeof(is)<<endl;

    return 0;
}