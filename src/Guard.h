#ifndef GUARD_H
#define GUARD_H

#include "Staff.h"
#include <iostream>

using namespace std;

class Guard : public Staff{
    private:
        string shift;
        string location;
    
    public:
        ~Guard(){}

        Guard(string getId, string getName, string getSalary, string getCategory, string getShift, string getLocation){
            this->setId(getId);
            this->setName(getName);
            this->setSalary(getSalary);
            this->setCategory(getCategory);
            this->setShift(getShift);
            this->setLocation(getLocation);
        }

        string getShift(){
            return this->shift;
        }

        void setShift(string shift){
            this->shift = shift;
        }

        string getLocation(){
            return this->location;
        }

        void setLocation(string location){
            this->location = location;
        }
};

#endif 
