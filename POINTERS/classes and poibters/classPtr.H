#ifndef CLASSPTR_H
#define CLASSPTR_H
#include <iostream>
#include <string>

using namespace std;

class ClassPtr{
    private:
        string fname;
        string lname;
        int age;
    
    public:
        ClassPtr();
        ClassPtr(string fname, string lname, int age);
        ~ClassPtr();
        void setFname(string fname);
        void setLname(string lname);
        void setAge(int age);
        string getFname();
        string getLname();
        int getAge();
};
#endif // CLASSPTR_H