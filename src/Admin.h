#ifndef ADMIN_H
#define ADMIN_H

#include "Staff.h"
#include <iostream>
#pragma once

using namespace std;

class AdminAndJanitorial : public Staff{
    private:
        string designation;
    
    public:
        ~AdminAndJanitorial(){}

        AdminAndJanitorial(string getId, string getName, float getSalary, string getCategory, string getDesignation){
            id = getId;
            name = getName;
            salary = getSalary;
            category = getCategory;
            designation = getDesignation;
        }

        string getDesignation(){
            return designation;
        }

        void setDesignation(string designation){
            this->designation = designation;
        }
};

#endif 