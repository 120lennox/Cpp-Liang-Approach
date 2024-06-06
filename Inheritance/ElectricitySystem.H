#ifndef ELECTRICITY_H
#define ELECTRICITY_H
#include <iostream>
#include <string>
#include "BaseSystem.H"
using namespace std;

class Electricity : public BaseSystem {
    private:
        int balance;
        int units;
    public:
        Electricity();
        Electricity(long meter_number);
        ~Electricity();
        void enter_units(int units);
        void check_balance();
};

#endif