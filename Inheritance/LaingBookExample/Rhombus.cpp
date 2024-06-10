#include "Rhombus.H"
#include <cmath>

Rhombus::Rhombus(){
    diagonal1 = 0;
    diagonal2 = 0;
}

Rhombus::Rhombus(double diagonal1, double diagonal2, string& color, bool filled){
    setDiagonal1(diagonal1);
    setDiagonal2(diagonal2);
    setFilled(filled);
    setColor(color);
}

Rhombus::~Rhombus(){};

void Rhombus::setDiagonal1(double diagonal1){
    this->diagonal1 = diagonal1;
}

void Rhombus::setDiagonal2(double diagonal2){
    this->diagonal2 = diagonal2;
}

double Rhombus::getDiagonal1(){
    return diagonal1;
}

double Rhombus::getDiagonal2(){
    return diagonal2;
}

double Rhombus::getArea() const{
    return (diagonal1 * diagonal2) / 2;
}

