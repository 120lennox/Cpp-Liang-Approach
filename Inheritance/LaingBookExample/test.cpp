#include <iostream>

using namespace std;

void Gravity(float mass, const float& acceleration, float& force);

int main(){
    float gravityForce = 2.0f;
    float objectMass = 4.0f;
    const float gravityAcc = 10.0f;

    Gravity(objectMass, gravityAcc, gravityForce);
    cout<<objectMass<<" "<<gravityAcc<<" "<<gravityForce<<endl;
    return 0;
}

void Gravity(float mass, const float& acceleration, float& force){
    mass = mass * 2.0f;
    force = mass * acceleration;
}