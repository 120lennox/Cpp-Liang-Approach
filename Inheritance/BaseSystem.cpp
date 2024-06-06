#include "BaseSystem.H"

BaseSystem::BaseSystem(){
    // Initialize the base system
    meter_number = 0;
}

BaseSystem::BaseSystem(long meter_number){
    this->meter_number = meter_number;
}

void BaseSystem::setMeter_number(long meter_number){
    this->meter_number = meter_number;
}

long BaseSystem::getMeter_number(){
    return this->meter_number;
}