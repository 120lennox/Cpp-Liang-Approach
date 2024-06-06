#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include <iostream>
#include <string>
using namespace std;

class GeometriObject{
    private:
        string color;
        bool filled;
    
    public:
        GeometriObject();
        GeometriObject(const string& color, bool filled);
        string getColor() const;
        void setColor(const string& color);
        bool isFilled();
        void setFilled(bool filled);
        string toString() const;

};

#endif