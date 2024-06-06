/**
 * @author: Lennox Mountain
 * an approach of trying to replace ESCOM AND WATER board METERS. 
 * Everything can be done on phone
 */

#ifndef BASESYS_H
#define BASESYS_H
#include <iostream>
using namespace std;

class BaseSystem{
    private:
        long meter_number;
    
    public:
        BaseSystem();
        BaseSystem(long meter_number);
        ~BaseSystem();
        void setMeter_number(long meter_number);
        long getMeter_number();

};
#endif // BASESYS_H