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
            this->setHouseNo(getHouseNo);
            this->setBlock(getBlock);
            this->setResidentName(getName);
            this->setType(getType);
        }

        string getHouseNo(){
            return this->houseNo;
        }

        void setHouseNo(string hName){
            this->houseNo = hName;
        }

        char getBlock(){
            return this->block;
        }

        void setBlock(char blk){
            this->block = blk;
        }

        string getResidentName(){
            return this->residentName;
        }

        void setResidentName(string rName){
            this->residentName = rName;
        }

        string getType(){
            return this->type;
        }

        void setType(string tp){
            this->type = tp;
        }
};

#endif
