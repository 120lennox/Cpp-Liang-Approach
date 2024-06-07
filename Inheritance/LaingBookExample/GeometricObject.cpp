#include "GeometricObject.h"

GeometriObject::GeometriObject(){
    color = "black";
    filled = false;
}

GeometriObject::GeometriObject(const string& color, bool filled){
    this->color = color;
    this->filled = filled;
}

void GeometriObject::setColor(const string& color){
    this->color = color;
}

string GeometriObject::getColor () const{
    return color;
}

bool GeometriObject::isFilled(){
    return filled;
}

void GeometriObject::setFilled(bool filled){
    this->filled = filled;
}

string GeometriObject::toString() const{
    return "this is a geometric object";
}