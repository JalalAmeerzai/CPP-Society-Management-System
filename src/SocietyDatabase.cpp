#include <iostream>
#include <iomanip>
#include <cstring>
#include "Admin.h"
#include "Guard.h"
#include "House.h"
#include "Data.h"

using namespace std;

class SocietyDatabase{
    private:
        SocietyDatabase(){}
    
    public:
        static void listHouses(){
            int cellWidth = 17;
            cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
            cout << "|                                           LIST OF HOUSES                                          |" <<endl;
            cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
            cout << "| "<<setw(cellWidth)<<"S. No"<<" | " << setw(cellWidth)<<"Full Name"<<" | " << setw(cellWidth)<<"House No."<<" | " << setw(cellWidth)<<"Block"<<" | " << setw(cellWidth)<<"Type"<<" |" <<endl;
            cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
            for(int i=0; i<sizeof(houses)/sizeof(houses[0]); i++){
                cout << "| "<<setw(cellWidth)<<i+1<<" | " <<setw(cellWidth)<<houses[i]->getResidentName()<<" | " <<setw(cellWidth)<<houses[i]->getHouseNo()<<" | " <<setw(cellWidth)<<houses[i]->getBlock()<<" | " <<setw(cellWidth)<<houses[i]->getType()<<" |" <<endl;
                cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
            }
        }

        static void getHouse(string nId, int factor){
            int cellWidth = 17;
            int result = 0;
            if(factor == 1){
                cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                cout << "|                                           LIST OF HOUSES                                          |" <<endl;
                cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                cout << "| "<<setw(cellWidth)<<"S. No"<<" | " << setw(cellWidth)<<"Full Name"<<" | " << setw(cellWidth)<<"House No."<<" | " << setw(cellWidth)<<"Block"<<" | " << setw(cellWidth)<<"Type"<<" |" <<endl;
                cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
                for(int i=0; i<sizeof(houses)/sizeof(houses[0]); i++){
                    if(strstr(convertToUpper(houses[i]->getResidentName()).c_str() , convertToUpper(nId).c_str())){
                        result++;
                        cout << "| "<<setw(cellWidth)<<result<<" | " <<setw(cellWidth)<<houses[i]->getResidentName()<<" | " <<setw(cellWidth)<<houses[i]->getHouseNo()<<" | " <<setw(cellWidth)<<houses[i]->getBlock()<<" | " <<setw(cellWidth)<<houses[i]->getType()<<" |" <<endl;
                        cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
                    }
                }
            }else if(factor == 2){
                cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                cout << "|                                           LIST OF HOUSES                                          |" <<endl;
                cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                cout << "| "<<setw(cellWidth)<<"S. No"<<" | " << setw(cellWidth)<<"Full Name"<<" | " << setw(cellWidth)<<"House No."<<" | " << setw(cellWidth)<<"Block"<<" | " << setw(cellWidth)<<"Type"<<" |" <<endl;
                cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
                for(int i=0; i<sizeof(houses)/sizeof(houses[0]); i++){
                    if(strstr(convertToUpper(houses[i]->getHouseNo()).c_str() , convertToUpper(nId).c_str())){
                        result++;
                        cout << "| "<<setw(cellWidth)<<result<<" | " <<setw(cellWidth)<<houses[i]->getResidentName()<<" | " <<setw(cellWidth)<<houses[i]->getHouseNo()<<" | " <<setw(cellWidth)<<houses[i]->getBlock()<<" | " <<setw(cellWidth)<<houses[i]->getType()<<" |" <<endl;
                        cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
                    }
                }
            }
        }

        static void setHouse(string houseNo, char block, string residentName, string type){
            House house(houseNo, block, residentName, type);
            houses[sizeof(houses)/sizeof(houses[0])] = &house;
            system("cls");
            cout << sizeof(houses)/sizeof(houses[0]);
            char c;
            cin >> c;
        }

        static string convertToUpper(string value){
            string upperCase = "";
            for(int i=0; i<value.length(); i++){
                upperCase += toupper(value[i]);
            }
            return upperCase;
        }

        static void listStaff(){
            int cellWidth = 17;
            cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
            cout << "|                                           LIST OF STAFF.                                          |" <<endl;
            cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
            cout << "| "<<setw(cellWidth)<<"Staff ID"<<" | " << setw(cellWidth)<<"Full Name"<<" | " << setw(cellWidth)<<"Salary (PKR)"<<" | " << setw(cellWidth)<<"Category"<<" | " << setw(cellWidth)<<"Designation"<<" |" <<endl;
            cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
            for(int i=0; i<sizeof(staff)/sizeof(staff[0]); i++){
                cout << "| "<<setw(cellWidth)<<staff[i]->getId()<<" | " <<setw(cellWidth)<<staff[i]->getName()<<" | " <<setw(cellWidth)<<staff[i]->getSalary()<<" | " <<setw(cellWidth)<<staff[i]->getCategory()<<" | " <<setw(cellWidth)<<staff[i]->getDesignation()<<" |" <<endl;
                cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
            }
        }

        static void getStaff(string nId, int factor){
            int cellWidth = 17;
            if(factor == 1){
                cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                cout << "|                                           LIST OF STAFF.                                          |" <<endl;
                cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                cout << "| "<<setw(cellWidth)<<"Staff ID"<<" | " << setw(cellWidth)<<"Full Name"<<" | " << setw(cellWidth)<<"Salary (PKR)"<<" | " << setw(cellWidth)<<"Category"<<" | " << setw(cellWidth)<<"Designation"<<" |" <<endl;
                cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
                for(int i=0; i<sizeof(staff)/sizeof(staff[0]); i++){
                    if(strstr(convertToUpper(staff[i]->getName()).c_str() , convertToUpper(nId).c_str())){
                        cout << "| "<<setw(cellWidth)<<staff[i]->getId()<<" | " <<setw(cellWidth)<<staff[i]->getName()<<" | " <<setw(cellWidth)<<staff[i]->getSalary()<<" | " <<setw(cellWidth)<<staff[i]->getCategory()<<" | " <<setw(cellWidth)<<staff[i]->getDesignation()<<" |" <<endl;
                        cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
                    }
                }
            }else if(factor == 2){
                cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                cout << "|                                           LIST OF STAFF.                                          |" <<endl;
                cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                cout << "| "<<setw(cellWidth)<<"Staff ID"<<" | " << setw(cellWidth)<<"Full Name"<<" | " << setw(cellWidth)<<"Salary (PKR)"<<" | " << setw(cellWidth)<<"Category"<<" | " << setw(cellWidth)<<"Designation"<<" |" <<endl;
                cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
                for(int i=0; i<sizeof(staff)/sizeof(staff[0]); i++){
                    if(strstr(convertToUpper(staff[i]->getId()).c_str() , convertToUpper(nId).c_str())){
                        cout << "| "<<setw(cellWidth)<<staff[i]->getId()<<" | " <<setw(cellWidth)<<staff[i]->getName()<<" | " <<setw(cellWidth)<<staff[i]->getSalary()<<" | " <<setw(cellWidth)<<staff[i]->getCategory()<<" | " <<setw(cellWidth)<<staff[i]->getDesignation()<<" |" <<endl;
                        cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
                    }
                }
            }
        }

        static void listGuards(){
            int cellWidth = 17;
            cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
            cout << "|                                           LIST OF GUARDS                                          |" <<endl;
            cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
            cout << "| "<<setw(cellWidth)<<"Guard ID"<<" | " << setw(cellWidth)<<"Full Name"<<" | " << setw(cellWidth)<<"Salary (PKR)"<<" | " << setw(cellWidth)<<"Shift"<<" | " << setw(cellWidth)<<"Location"<<" |" <<endl;
            cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
            for(int i=0; i<sizeof(guards)/sizeof(guards[0]); i++){
                cout << "| "<<setw(cellWidth)<<guards[i]->getId()<<" | " <<setw(cellWidth)<<guards[i]->getName()<<" | " <<setw(cellWidth)<<guards[i]->getSalary()<<" | " <<setw(cellWidth)<<guards[i]->getShift()<<" | " <<setw(cellWidth)<<guards[i]->getLocation()<<" |" <<endl;
                cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
            }
        }

        static void getGuard(string nId, int factor){
            int cellWidth = 17;
            if(factor == 1){
                cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                cout << "|                                           LIST OF GUARDS                                          |" <<endl;
                cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                cout << "| "<<setw(cellWidth)<<"Guard ID"<<" | " << setw(cellWidth)<<"Full Name"<<" | " << setw(cellWidth)<<"Salary (PKR)"<<" | " << setw(cellWidth)<<"Shift"<<" | " << setw(cellWidth)<<"Location"<<" |" <<endl;
                cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
                for(int i=0; i<sizeof(guards)/sizeof(guards[0]); i++){
                    if(strstr(convertToUpper(guards[i]->getName()).c_str() , convertToUpper(nId).c_str())){
                        cout << "| "<<setw(cellWidth)<<guards[i]->getId()<<" | " <<setw(cellWidth)<<guards[i]->getName()<<" | " <<setw(cellWidth)<<guards[i]->getSalary()<<" | " <<setw(cellWidth)<<guards[i]->getShift()<<" | " <<setw(cellWidth)<<guards[i]->getLocation()<<" |" <<endl;
                        cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
                    }
                }
            }else if(factor == 2){
                cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                cout << "|                                           LIST OF GUARDS                                          |" <<endl;
                cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                cout << "| "<<setw(cellWidth)<<"Guard ID"<<" | " << setw(cellWidth)<<"Full Name"<<" | " << setw(cellWidth)<<"Salary (PKR)"<<" | " << setw(cellWidth)<<"Shift"<<" | " << setw(cellWidth)<<"Location"<<" |" <<endl;
                cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
                for(int i=0; i<sizeof(guards)/sizeof(guards[0]); i++){
                    if(strstr(convertToUpper(guards[i]->getId()).c_str() , convertToUpper(nId).c_str())){
                        cout << "| "<<setw(cellWidth)<<guards[i]->getId()<<" | " <<setw(cellWidth)<<guards[i]->getName()<<" | " <<setw(cellWidth)<<guards[i]->getSalary()<<" | " <<setw(cellWidth)<<guards[i]->getShift()<<" | " <<setw(cellWidth)<<guards[i]->getLocation()<<" |" <<endl;
                        cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
                    }
                }
            }
        }
        
};
