#include <iostream>
#include "ClassPtr.H"
using namespace std;

ClassPtr::ClassPtr(){
    fname = "";
    lname = "";
    age = 0;
}

ClassPtr::ClassPtr(string fname, string lname, int age){
    this->fname = fname;
    this->lname = lname;
    this->age = age;
}

ClassPtr::~ClassPtr(){};

void ClassPtr::setFname(string fname){
    this->fname = fname;
}

void ClassPtr::setLname(string lname){
    this->lname = lname;
}

void ClassPtr::setAge(int age){
    this->age = age;
}

string ClassPtr::getFname(){
    return fname;
}

string ClassPtr::getLname(){
    return lname;
}

int ClassPtr::getAge(){
    return age;
}

