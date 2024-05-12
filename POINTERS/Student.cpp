#include "Student.H"
#include <string>
#include <cstring>
using namespace std;

//this is class instantiation. using the the default constructor
Student::Student(){
    // public variable members
    fName = "";
    lName = "";
    address = "";
    course_count = 0;
    age = 0;

    //private variable members
    phone_number = "";
    marital_status = "";
}

//defining default destructor
Student::~Student(){
    cout<<"Object destroyed"<<endl;
}

 //defining methods
 /*
 Note: the add_course method has been defined outside the constructor. this saves you alot of errors
 */    
void Student::add_course(string course1, string course2,string course3){
    course_count = 3;
    cout<<"You have added "<<course1<<", "<<course2<<" and"<<course3<<endl;
    cout<<"Total courses "<<course_count<<endl;
}

void Student::drop_course(string course_name){
    cout<<"You have dropped "<<course_name<<endl;
    cout<<"Total courses "<<course_count - 1<<endl;
}