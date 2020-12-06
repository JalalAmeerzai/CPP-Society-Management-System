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
House *houses[] = {&h1, &h2, &h3, &h4, &h5, &h6, &h7, &h8, &h9, &h10};

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
AdminAndJanitorial *staff[] = {&s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8, &s9, &s10};

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
Guard *guards[] = {&g1, &g2, &g3, &g4, &g5, &g6, &g7, &g8, &g9, &g10};

#endif 