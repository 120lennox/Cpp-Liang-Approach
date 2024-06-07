#ifndef RHOMBUS_H
#define RHOMBUS_H
#include <iostream>
#include "GeometricObject.h"


class Rhombus:public GeometriObject{
    private:
        double diagonal1;
        double diagonal2;
    public:
        Rhombus();
        Rhombus(double d1, double d2, string& color, bool filled);
        ~Rhombus();
        double getDiagonal1();
        double getDiagonal2();
        void setDiagonal1(double diagonal1);
        void setDiagonal2(double diagonal2);
        double getArea() const;
        double getPerimeter() const;
};

#endif