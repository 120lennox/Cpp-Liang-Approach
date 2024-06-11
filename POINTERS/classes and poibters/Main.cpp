#include <iostream>
#include <string>
#include "ClassPtr.cpp"

int main(){
    //commented but okay
    // ClassPtr classpointer1;

    // ClassPtr* pClass = &classpointer1;

    //dynamic memory allocation

    ClassPtr* pClass = new ClassPtr("Hess", "Kumtumanje", 10);

    pClass->setFname("Lennox");
    cout<<"My name is "<<pClass->getFname()<<" "<<pClass->getLname()<<" and am "<<pClass->getAge()<<" years old"<<endl;

    delete pClass;
    pClass = nullptr;

    return 0;
}