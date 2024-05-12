#include <iostream>
#include "Student.H"
using namespace std;

int main(){
    Student();
    Student student1;

    student1.fName = "Lennox";
    student1.lName = "Mt";

    int option = 0;
    string course1;
    string course2;
    string course3;

    while(option !=5){
        cout<<"Hello "<<student1.fName<<", Choose from the following options."<<endl;
        cout<<"1. add course"<<endl;
        cout<<"2. drop course"<<endl;
        cout<<"3. update profile"<<endl;
        cout<<"4. View profile"<<endl;
        cout<<"5. exit"<<endl;
        cout<<"option: ";
        cin>>option;

        if (option == 1){
            cout<<"Enter course: ";
            cin>>course1;

            cout<<"---------------------"<<endl;
            cout<<course1<<" added successifully"<<endl;

            cout<<"Enter course: ";
            cin>>course2;

            cout<<"---------------------"<<endl;
            cout<<course1<<" added successifully"<<endl;

            cout<<"Enter course: ";
            cin>>course3;

            cout<<"---------------------"<<endl;
            cout<<course1<<" added successifully"<<endl;

            student1.add_course(course1, course2, course3);
        }
    }
}