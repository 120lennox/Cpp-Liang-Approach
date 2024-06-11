#ifndef CLASSPTR_H
#define CLASSPTR_H
#include <iostream>
#include <string>

using namespace std;

class classPtr{
    private:
        string fname;
        string lname;
        int age;
    
    public:
        classPtr();
        classPtr(string fname, string lname, int age);
        ~classPtr();
        void setFname(string fname);
        void setLname(string lname);
        void setAge(int age);
        string getFname();
        string getLname();
        int getAge();
};
#endif // CLASSPTR_H