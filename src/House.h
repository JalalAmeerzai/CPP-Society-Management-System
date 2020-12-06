#ifndef HOUSE_H
#define HOUSE_H

#include <iostream>

using namespace std;

class House{
    private:
        string houseNo;
        char block;
        string residentName;
        string type;

    public:
    	~House(){}
        House(string getHouseNo, char getBlock, string getName, string getType){
            houseNo = getHouseNo;
            block = getBlock;
            residentName = getName;
            type = getType;
        }

        string getHouseNo(){
            return houseNo;
        }

        void setHouseNo(string houseNo){
            this->houseNo = houseNo;
        }

        char getBlock(){
            return block;
        }

        void setBlock(char block){
            this->block = block;
        }

        string getResidentName(){
            return residentName;
        }

        void setResidentName(string residentName){
            this->residentName = residentName;
        }

        string getType(){
            return type;
        }

        void setType(string type){
            this->type = type;
        }
};

#endif