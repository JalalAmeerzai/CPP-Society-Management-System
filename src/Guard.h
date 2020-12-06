#ifndef GUARD_H
#define GUARD_H

#include "Staff.h"
#include <iostream>
#pragma once
using namespace std;

class Guard : public Staff{
    private:
        string shift;
        string location;
    
    public:
        ~Guard(){}

        Guard(string getId, string getName, float getSalary, string getCategory, string getShift, string getLocation){
            id = getId;
            name = getName;
            salary = getSalary;
            category = getCategory;
            shift = getShift;
            location = getLocation;
        }

        string getShift(){
            return shift;
        }

        void setShift(string shift){
            this->shift = shift;
        }

        string getLocation(){
            return location;
        }

        void setLocations(string location){
            this->location = location;
        }
};

#endif 