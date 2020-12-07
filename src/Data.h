#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <vector> //USE VECTOR for objects
#include "iomanip"
#include "Admin.h"
#include "Guard.h"
#include "House.h"

using namespace std;

House h1("D-18", 'D',"M. Sabir", "Tenant");
House h2("C-15", 'C',"Taha Ahmed Khan", "Resident");
House h3("C-19",'C',"Sabih Ahmad", "Resident");
House h4("A-10",'A',"Syed Fazal Abbass","Tenant");
House h5("B-13",'B',"Hamd Rehman","Tenant");
House h6("B-10",'B',"Abdur Rehman","Resident");
House h7("D-20",'D',"Umair Basit","Resident");
House h8("A-05",'A',"Sajeel Ahmed","Tenant");
House h9("E-09",'E',"M. Wasay","Resident");
House h10("E-01",'E',"Tahir Ahmed","Tenant");
vector <House> houses;

AdminAndJanitorial s1("Adm-01", "M. Sabir", 50000, "Administrative", "President");
AdminAndJanitorial s2("Adm-02", "Arslan Khan", 30000, "Administrative", "Head Recreations");
AdminAndJanitorial s3("Adm-03", "Annie", 40000, "Administrative", "Director");
AdminAndJanitorial s4("Adm-04", "Hammad Khan", 30000, "Administrative", "Secretary");
AdminAndJanitorial s5("Adm-05", "Asif Ali", 25000, "Administrative", "Maintenance");
AdminAndJanitorial s6("Jnt-06", "Farhan Mangi", 20000, "Janitorial", "Union Head");
AdminAndJanitorial s7("Jnt-07", "Areeb Ahmed", 13000, "Janitorial", "Sweeper AB");
AdminAndJanitorial s8("Jnt-08", "Jawwad Khan", 13000, "Janitorial", "Sweeper C");
AdminAndJanitorial s9("Jnt-09", "Sibtain Shabir", 13000, "Janitorial", "Sweeper D");
AdminAndJanitorial s10("Jnt-10", "Affan Shahid", 13000, "Janitorial", "Sweeper E");
vector <AdminAndJanitorial> staff;

Guard g1("Scr-01", "M. Ahmad", 25000, "Security", "Night", "Block A");
Guard g2("Scr-02", "Sharjeel Khan", 20000, "Security", "Night", "Block B");
Guard g3("Scr-03", "Osama Ahmed", 15000, "Security", "Night", "Block C");
Guard g4("Scr-04", "Shahdaab", 18000, "Security", "Night", "Block D");
Guard g5("Scr-05", "Babar Ali", 14000, "Security", "Night", "Block E");
Guard g6("Scr-06", "Shoaib Sheikh", 30000, "Security", "Morning", "Block A");
Guard g7("Scr-07", "Sameer Shah", 25000, "Security", "Morning", "Block B");
Guard g8("Scr-08", "Shakeel Khan", 22000, "Security", "Morning", "Block C");
Guard g9("Scr-09", "Sohail Sardar", 14000, "Security", "Morning", "Block D");
Guard g10("Scr-10", "Armaiz", 16000, "Security", "Morning", "Block E");
vector <Guard> guards;

class Data{
    private:
        static void populateHouseData(){
            houses.push_back(h1);
            houses.push_back(h2);
            houses.push_back(h3);
            houses.push_back(h4);
            houses.push_back(h5);
            houses.push_back(h6);
            houses.push_back(h7);
            houses.push_back(h8);
            houses.push_back(h9);
            houses.push_back(h10);
        }

        static void populateAdminData(){
            staff.push_back(s1);
            staff.push_back(s2);
            staff.push_back(s3);
            staff.push_back(s4);
            staff.push_back(s5);
            staff.push_back(s6);
            staff.push_back(s7);
            staff.push_back(s8);
            staff.push_back(s9);
            staff.push_back(s10);
        }

        static void populateGuardData(){
            guards.push_back(g1);
            guards.push_back(g2);
            guards.push_back(g3);
            guards.push_back(g4);
            guards.push_back(g5);
            guards.push_back(g6);
            guards.push_back(g7);
            guards.push_back(g8);
            guards.push_back(g9);
            guards.push_back(g10);
        }

    public:
        static void bootstrapData(){
            populateHouseData();
            populateAdminData();
            populateGuardData();
        }
};

#endif 
