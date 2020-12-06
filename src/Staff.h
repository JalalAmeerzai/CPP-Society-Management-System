#ifndef STAFF_H
#define STAFF_H

#include <iostream>

using namespace std;

class Staff{
    protected:
        string id;
        string name;
        float salary;
        string category;
    
    public:
        string getId(){
            return this->id;
        }

        void setId(string id){
            this->id = id;
        }

        string getName(){
            return this->name;
        }

        void setName(string name){
            this->name = name;
        }

        float getSalary(){
            return this->salary;
        }

        void setSalary(float salary){
            this->salary = salary;
        }

        string getCategory(){
            return this->category;
        }

        void setCategory(string category){
            this->category = category;
        }
};


#endif 