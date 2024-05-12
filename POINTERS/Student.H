#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        //default constructor;
        Student();
        string fName;
        string lName;
        string address;
        int course_count;
        int age;

        void add_course(string course1, string course2, string course3);
        void drop_course(string course_name);
    
    private:
        string phone_number;
        string marital_status;
    
    //destructor;
    ~Student();

};