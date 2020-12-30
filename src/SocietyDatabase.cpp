#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <vector>
#include <sstream>
#include <fstream>
#include "Admin.h"
#include "Guard.h"
#include "House.h"

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
            
			ifstream MyReadFile("data.txt");
			string fileLine="";
			int i = 0;
			while (getline (MyReadFile, fileLine)) {
				int length = fileLine.length();
				char fileLine2[length];
				strcpy(fileLine2, fileLine.c_str());
				vector <string> houseData;
				char *token = strtok(fileLine2, ",");
			    while (token != NULL)
			    { 
			        houseData.push_back(token);
			        token = strtok(NULL, ",");
			        
			    }
			    if(houseData.size() == 4){
			    	cout << "| "<<setw(cellWidth)<<i+1<<" | " <<setw(cellWidth)<<houseData[0]<<" | " <<setw(cellWidth)<<houseData[1]<<" | " <<setw(cellWidth)<<houseData[2]<<" | " <<setw(cellWidth)<<houseData[3]<<" |" <<endl;
            		cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
            		i++;
				}
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
                
                
                ifstream MyReadFile("data.txt");
				string fileLine="";
				int result = 1;
				while (getline (MyReadFile, fileLine)) {
					int length = fileLine.length();
					char fileLine2[length];
					strcpy(fileLine2, fileLine.c_str());
					vector <string> houseData;
					char *token = strtok(fileLine2, ",");
				    while (token != NULL)
				    { 
				        houseData.push_back(token);
				        token = strtok(NULL, ",");
				        
				    }
				    if(houseData.size() == 4){
				    		if(strstr(convertToUpper(houseData[2]).c_str() , convertToUpper(nId).c_str())){
				    		cout << "| "<<setw(cellWidth)<<result<<" | " <<setw(cellWidth)<<houseData[0]<<" | " <<setw(cellWidth)<<houseData[1]<<" | " <<setw(cellWidth)<<houseData[2]<<" | " <<setw(cellWidth)<<houseData[3]<<" |" <<endl;
	            			cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
	            			result++;
						}
					}
				    
					
				}
                
            }else if(factor == 2){
                cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                cout << "|                                           LIST OF HOUSES                                          |" <<endl;
                cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                cout << "| "<<setw(cellWidth)<<"S. No"<<" | " << setw(cellWidth)<<"Full Name"<<" | " << setw(cellWidth)<<"House No."<<" | " << setw(cellWidth)<<"Block"<<" | " << setw(cellWidth)<<"Type"<<" |" <<endl;
                cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
                ifstream MyReadFile("data.txt");
				string fileLine="";
				int result = 1;
				while (getline (MyReadFile, fileLine)) {
					int length = fileLine.length();
					char fileLine2[length];
					strcpy(fileLine2, fileLine.c_str());
					vector <string> houseData;
					char *token = strtok(fileLine2, ",");
				    while (token != NULL)
				    { 
				        houseData.push_back(token);
				        token = strtok(NULL, ",");
				        
				    }
				    if(houseData.size() == 4){
				    		if(strstr(convertToUpper(houseData[0]).c_str() , convertToUpper(nId).c_str())){
				    		cout << "| "<<setw(cellWidth)<<result<<" | " <<setw(cellWidth)<<houseData[0]<<" | " <<setw(cellWidth)<<houseData[1]<<" | " <<setw(cellWidth)<<houseData[2]<<" | " <<setw(cellWidth)<<houseData[3]<<" |" <<endl;
	            			cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
	            			result++;
						}
					}
				    
					
				}
            }
        }

        static void setHouse(string houseNo, char block, string residentName, string type){
            House house(houseNo, block, residentName, type);
            vector <string> houseData;
            houseData.push_back(house.getHouseNo());
            string getBlock(1,house.getBlock());
            houseData.push_back(getBlock);
            houseData.push_back(house.getResidentName());
            houseData.push_back(house.getType());
            addToFile(houseData);
        }

        static void listStaff(){
            int cellWidth = 17;
            cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
            cout << "|                                           LIST OF STAFF.                                          |" <<endl;
            cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
            cout << "| "<<setw(cellWidth)<<"Staff ID"<<" | " << setw(cellWidth)<<"Full Name"<<" | " << setw(cellWidth)<<"Salary (PKR)"<<" | " << setw(cellWidth)<<"Category"<<" | " << setw(cellWidth)<<"Designation"<<" |" <<endl;
            cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
            
            
            
            ifstream MyReadFile("data.txt");
			string fileLine="";
			while (getline (MyReadFile, fileLine)) {
				int length = fileLine.length();
				char fileLine2[length];
				strcpy(fileLine2, fileLine.c_str());
				vector <string> staffData;
				char *token = strtok(fileLine2, ",");
			    while (token != NULL)
			    { 
			        staffData.push_back(token);
			        token = strtok(NULL, ",");
			        
			    }
			    if(staffData.size() == 5){
			    	cout << "| "<<setw(cellWidth)<<staffData[0]<<" | " <<setw(cellWidth)<<staffData[1]<<" | " <<setw(cellWidth)<<staffData[2]<<" | " <<setw(cellWidth)<<staffData[3]<<" | " <<setw(cellWidth)<<staffData[4]<<" |" <<endl;
                	cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
				}
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
	            ifstream MyReadFile("data.txt");
				string fileLine="";
				while (getline (MyReadFile, fileLine)) {
					int length = fileLine.length();
					char fileLine2[length];
					strcpy(fileLine2, fileLine.c_str());
					vector <string> staffData;
					char *token = strtok(fileLine2, ",");
				    while (token != NULL)
				    { 
				        staffData.push_back(token);
				        token = strtok(NULL, ",");
				        
				    }
				    if(staffData.size() == 5){
				    	if(strstr(convertToUpper(staffData[1]).c_str() , convertToUpper(nId).c_str())){
				    		cout << "| "<<setw(cellWidth)<<staffData[0]<<" | " <<setw(cellWidth)<<staffData[1]<<" | " <<setw(cellWidth)<<staffData[2]<<" | " <<setw(cellWidth)<<staffData[3]<<" | " <<setw(cellWidth)<<staffData[4]<<" |" <<endl;
	                		cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
	                	}
					}
				}
            }else if(factor == 2){
                cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
	            cout << "|                                           LIST OF STAFF.                                          |" <<endl;
	            cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
	            cout << "| "<<setw(cellWidth)<<"Staff ID"<<" | " << setw(cellWidth)<<"Full Name"<<" | " << setw(cellWidth)<<"Salary (PKR)"<<" | " << setw(cellWidth)<<"Category"<<" | " << setw(cellWidth)<<"Designation"<<" |" <<endl;
	            cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
	            ifstream MyReadFile("data.txt");
				string fileLine="";
				while (getline (MyReadFile, fileLine)) {
					int length = fileLine.length();
					char fileLine2[length];
					strcpy(fileLine2, fileLine.c_str());
					vector <string> staffData;
					char *token = strtok(fileLine2, ",");
				    while (token != NULL)
				    { 
				        staffData.push_back(token);
				        token = strtok(NULL, ",");
				        
				    }
				    if(staffData.size() == 5){
				    	if(strstr(convertToUpper(staffData[0]).c_str() , convertToUpper(nId).c_str())){
				    		cout << "| "<<setw(cellWidth)<<staffData[0]<<" | " <<setw(cellWidth)<<staffData[1]<<" | " <<setw(cellWidth)<<staffData[2]<<" | " <<setw(cellWidth)<<staffData[3]<<" | " <<setw(cellWidth)<<staffData[4]<<" |" <<endl;
	                		cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
	                	}
					}
				}
            }
        }

        static void setStaff(string id, string name, string salary, string category, string designation){
            AdminAndJanitorial admin(id, name, salary, category, designation);
            vector <string> staffData;
            staffData.push_back(admin.getId());
            staffData.push_back(admin.getName());
            staffData.push_back(admin.getSalary());
            staffData.push_back(admin.getCategory());
            staffData.push_back(admin.getDesignation());
            addToFile(staffData);
        }

        static void listGuards(){
            int cellWidth = 17;
            cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
            cout << "|                                           LIST OF GUARDS                                          |" <<endl;
            cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
            cout << "| "<<setw(cellWidth)<<"Guard ID"<<" | " << setw(cellWidth)<<"Full Name"<<" | " << setw(cellWidth)<<"Salary (PKR)"<<" | " << setw(cellWidth)<<"Shift"<<" | " << setw(cellWidth)<<"Location"<<" |" <<endl;
            cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
            
			ifstream MyReadFile("data.txt");
			string fileLine="";
			while (getline (MyReadFile, fileLine)) {
				int length = fileLine.length();
				char fileLine2[length];
				strcpy(fileLine2, fileLine.c_str());
				vector <string> staffData;
				char *token = strtok(fileLine2, ",");
			    while (token != NULL)
			    { 
			        staffData.push_back(token);
			        token = strtok(NULL, ",");
			        
			    }
			    if(staffData.size() == 6){
			    	cout << "| "<<setw(cellWidth)<<staffData[0]<<" | " <<setw(cellWidth)<<staffData[1]<<" | " <<setw(cellWidth)<<staffData[2]<<" | " <<setw(cellWidth)<<staffData[4]<<" | " <<setw(cellWidth)<<staffData[5]<<" |" <<endl;
                	cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
				}
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
                ifstream MyReadFile("data.txt");
				string fileLine="";
				while (getline (MyReadFile, fileLine)) {
					int length = fileLine.length();
					char fileLine2[length];
					strcpy(fileLine2, fileLine.c_str());
					vector <string> staffData;
					char *token = strtok(fileLine2, ",");
				    while (token != NULL)
				    { 
				        staffData.push_back(token);
				        token = strtok(NULL, ",");
				        
				    }
				    if(staffData.size() == 6){
				    	if(strstr(convertToUpper(staffData[1]).c_str() , convertToUpper(nId).c_str())){
				    		cout << "| "<<setw(cellWidth)<<staffData[0]<<" | " <<setw(cellWidth)<<staffData[1]<<" | " <<setw(cellWidth)<<staffData[2]<<" | " <<setw(cellWidth)<<staffData[4]<<" | " <<setw(cellWidth)<<staffData[5]<<" |" <<endl;
                			cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
	                	}
					}
				}
            }else if(factor == 2){
                cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                cout << "|                                           LIST OF GUARDS                                          |" <<endl;
                cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                cout << "| "<<setw(cellWidth)<<"Guard ID"<<" | " << setw(cellWidth)<<"Full Name"<<" | " << setw(cellWidth)<<"Salary (PKR)"<<" | " << setw(cellWidth)<<"Shift"<<" | " << setw(cellWidth)<<"Location"<<" |" <<endl;
                cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
                ifstream MyReadFile("data.txt");
				string fileLine="";
				while (getline (MyReadFile, fileLine)) {
					int length = fileLine.length();
					char fileLine2[length];
					strcpy(fileLine2, fileLine.c_str());
					vector <string> staffData;
					char *token = strtok(fileLine2, ",");
				    while (token != NULL)
				    { 
				        staffData.push_back(token);
				        token = strtok(NULL, ",");
				        
				    }
				    if(staffData.size() == 6){
				    	if(strstr(convertToUpper(staffData[0]).c_str() , convertToUpper(nId).c_str())){
				    		cout << "| "<<setw(cellWidth)<<staffData[0]<<" | " <<setw(cellWidth)<<staffData[1]<<" | " <<setw(cellWidth)<<staffData[2]<<" | " <<setw(cellWidth)<<staffData[4]<<" | " <<setw(cellWidth)<<staffData[5]<<" |" <<endl;
                			cout << "+-------------------+-------------------+-------------------+-------------------+-------------------+" <<endl;
	                	}
					}
				}
            }
        }

        static void setGuard(string id, string name, string salary, string category, string shift, string location){
            Guard guard(id, name, salary, category, shift, location);
            vector <string> guardData;
            guardData.push_back(guard.getId());
            guardData.push_back(guard.getName());
            guardData.push_back(guard.getSalary());
            guardData.push_back(guard.getCategory());
            guardData.push_back(guard.getShift());
            guardData.push_back(guard.getLocation());
            addToFile(guardData);
        }


        static string convertToUpper(string value){
            string upperCase = "";
            for(int i=0; i<value.length(); i++){
                upperCase += toupper(value[i]);
            }
            return upperCase;
        }
        
        
        static void addToFile(vector <string> data){
        	string fileData = "";
        	for(int i=0; i<data.size(); i++){
        		fileData+=data[i];
        		if(i == data.size()-1){
        			fileData+='\n';
				}
				else{
					fileData+=',';
				}
				
			}
			ofstream MyFile("data.txt", std::ios_base::app);
  			MyFile << fileData;
  			MyFile.close();
		}
        
};
