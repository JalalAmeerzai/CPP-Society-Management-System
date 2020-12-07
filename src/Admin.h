#ifndef ADMIN_H
#define ADMIN_H

#include "Staff.h"
#include <iostream>

using namespace std;

class AdminAndJanitorial : public Staff{
    private:
        string designation;
    
    public:
        ~AdminAndJanitorial(){}

        AdminAndJanitorial(string getId, string getName, float getSalary, string getCategory, string getDesignation){
            this->setId(getId);
            this->setName(getName);
            this->setSalary(getSalary);
            this->setCategory(getCategory);
            this->setDesignation(getDesignation);
        }

        string getDesignation(){
            return this->designation;
        }

        void setDesignation(string designation){
            this->designation = designation;
        }
};

#endif 