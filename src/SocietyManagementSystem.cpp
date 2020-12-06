#include <iostream>
#include <conio.h>
#include <cstdlib>
#include "SocietyDatabase.cpp"


using namespace std;

class SocietyManagementSystem{
    private:
        SocietyManagementSystem(){}
        

        static void mainScreen(){
            system("cls");
            cout << "+----------------------   InstaRec   ----------------------+"<<endl;
            cout << "|                                                          |"<<endl;
            cout << "|                                                          |"<<endl;
            cout << "|                Society Management System.                |"<<endl;
            cout << "|                                                          |"<<endl;
            cout << "|                                                          |"<<endl;
            cout << "|                                                          |"<<endl;
            cout << "|               +-----------+   +----------+               |"<<endl;
            cout << "|               | LOGIN (L) |   | EXIT (E) |               |"<<endl;
            cout << "|               +-----------+   +----------+               |"<<endl;
            cout << "|                                                          |"<<endl;
            cout << "+----------------------------------------------------------+";
            switch(tolower(getch())){
                case 'l':
                    loginScreen("");
                    break;
                case 'e':
                    exit(0);
                    break;
                default:
                    mainScreen();
            }
        }


        static void loginScreen(string errorMessage){
            system("cls");
            string getUsername, getPassword;
            cout << "+----------------------  User Login  ----------------------+"<<endl;
            cout << "+----------------------------------------------------------+"<<endl;
            cout << endl;
            cout << "\t   "<<errorMessage<<endl;
            cout << endl;
            cout << "\tEnter Username: ";
            cin >> getUsername;
            cout << "\tEnter Password: ";
            while(true){
                char c = getch();
                if(!(c == '\r')){
                    getPassword += c;
                    cout << "*";
                }else{
                    break;
                }
            }
            if(userAuthentication(getUsername, getPassword) == 1){
                MainMenuSetup::initiate();
            }else{
                loginScreen("* Wrong username/password!! Try again.");
            }
        }


        static int userAuthentication(string username, string password){
            string dbUsername = "danish123";
            string dbPassword = "qwerty";
            if(dbUsername == username and dbPassword == password ){
                return 1;
            }else{
                return -1;
            }
        }
    

    public:
        static void initiate(){
            mainScreen();
        }
    

    class MainMenuSetup{
        private:
            static void mainMenu(){
                system("cls");
                cout << "+----------------------   InstaRec   ----------------------+"<<endl;
                cout << "|                                                          |"<<endl;
                cout << "|                                                          |"<<endl;
                cout << "|                        Main  Menu                        |"<<endl;
                cout << "|                                                          |"<<endl;
                cout << "|                 A) House Menu (Press 1)                  |"<<endl;
                cout << "|                 B) Staff Menu (Press 2)                  |"<<endl;
                cout << "|                 C) Guard Menu (Press 3)                  |"<<endl;
                cout << "|                 D) Lougout    (Press L)                  |"<<endl;
                cout << "|                                                          |"<<endl;
                cout << "+----------------------------------------------------------+";
                switch(tolower(getch())){
                    case '1':
                        generateHouseMenu();
                    case '2':
                        generateStaffMenu();
                    case '3':
                        generateGuardMenu();
                    case 'l':
                        mainScreen();
                        break;
                    default:
                        mainMenu();
                }
            }


            static void generateHouseMenu(){
                SocietyDatabase::setHouse("e-101",'e',"rasheed","tenant");
                system("cls");
                cout << "+----------------------   InstaRec   ----------------------+"<<endl;
                cout << "|                                                          |"<<endl;
                cout << "|                                                          |"<<endl;
                cout << "|                        House Menu                        |"<<endl;
                cout << "|                                                          |"<<endl;
                cout << "|              A) List Houses        (Press 1)             |"<<endl;
                cout << "|              B) Search By Resident (Press 2)             |"<<endl;
                cout << "|              C) Search By House#   (Press 3)             |"<<endl;
                cout << "|              D) Go Back            (Press 4)             |"<<endl;
                cout << "|                                                          |"<<endl;
                cout << "+----------------------------------------------------------+";
                string searchName;
                string searchId;
                switch(tolower(getch())){
                    case '1':
                        system("cls");
                        SocietyDatabase::listHouses();
                        cout << "\n\nPRESS ANY KEY TO GO BACK";
                        getch();
                        generateHouseMenu();
                        break;
                    case '2':
                        system("cls");
                        cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                        cout << "|                                        Search By Resident.                                        |" <<endl;
                        cout << "Enter Resident Name: ";
                        cin >> searchName;
                        SocietyDatabase::getHouse(searchName,1);
                        cout << "\n\nPRESS ANY KEY TO GO BACK";
                        getch();
                        generateHouseMenu();
                        break;
                    case '3':
                        system("cls");
                        cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                        cout << "|                                        Search By House No.                                        |" <<endl;
                        cout << "Enter House#: ";
                        cin >> searchId;
                        SocietyDatabase::getHouse(searchId,2);
                        cout << "\n\nPRESS ANY KEY TO GO BACK";
                        getch();
                        generateHouseMenu();
                        break;
                    case '4':
                        mainMenu();
                        break;
                    default:
                        generateHouseMenu();
                }
            }


            static void generateStaffMenu(){
                system("cls");
                cout << "+----------------------   InstaRec   ----------------------+"<<endl;
                cout << "|                                                          |"<<endl;
                cout << "|                                                          |"<<endl;
                cout << "|                        Staff Menu                        |"<<endl;
                cout << "|                                                          |"<<endl;
                cout << "|              A) Staff List         (Press 1)             |"<<endl;
                cout << "|              B) Search By Name     (Press 2)             |"<<endl;
                cout << "|              C) Search By ID       (Press 3)             |"<<endl;
                cout << "|              D) Go Back            (Press 4)             |"<<endl;
                cout << "|                                                          |"<<endl;
                cout << "+----------------------------------------------------------+";
                string searchName;
                string searchId;
                switch(tolower(getch())){
                    case '1':
                        system("cls");
                        SocietyDatabase::listStaff();
                        cout << "\n\nPRESS ANY KEY TO GO BACK";
                        getch();
                        generateStaffMenu();
                        break;
                    case '2':
                        system("cls");
                        cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                        cout << "|                                          Search By Name.                                          |" <<endl;
                        cout << "Enter Staff Name: ";
                        cin >> searchName;
                        SocietyDatabase::getStaff(searchName,1);
                        cout << "\n\nPRESS ANY KEY TO GO BACK";
                        getch();
                        generateStaffMenu();
                        break;
                    case '3':
                        system("cls");
                        cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                        cout << "|                                           Search By ID.                                           |" <<endl;
                        cout << "Enter Staff ID: ";
                        cin >> searchId;
                        SocietyDatabase::getStaff(searchId,2);
                        cout << "\n\nPRESS ANY KEY TO GO BACK";
                        getch();
                        generateStaffMenu();
                        break;
                    case '4':
                        mainMenu();
                        break;
                    default:
                        generateStaffMenu();
                }
            }


            static void generateGuardMenu(){
                system("cls");
                cout << "+----------------------   InstaRec   ----------------------+"<<endl;
                cout << "|                                                          |"<<endl;
                cout << "|                                                          |"<<endl;
                cout << "|                        Guard Menu                        |"<<endl;
                cout << "|                                                          |"<<endl;
                cout << "|              A) Guard List         (Press 1)             |"<<endl;
                cout << "|              B) Search By Name     (Press 2)             |"<<endl;
                cout << "|              C) Search By ID       (Press 3)             |"<<endl;
                cout << "|              D) Go Back            (Press 4)             |"<<endl;
                cout << "|                                                          |"<<endl;
                cout << "+----------------------------------------------------------+";
                string searchName;
                string searchId;
                switch(tolower(getch())){
                    case '1':
                        system("cls");
                        SocietyDatabase::listGuards();
                        cout << "\n\nPRESS ANY KEY TO GO BACK";
                        getch();
                        generateGuardMenu();
                        break;
                    case '2':
                        system("cls");
                        cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                        cout << "|                                          Search By Name.                                          |" <<endl;
                        cout << "Enter Guard Name: ";
                        cin >> searchName;
                        SocietyDatabase::getGuard(searchName,1);
                        cout << "\n\nPRESS ANY KEY TO GO BACK";
                        getch();
                        generateGuardMenu();
                        break;
                    case '3':
                        system("cls");
                        cout << "+---------------------------------------------------------------------------------------------------+" <<endl;
                        cout << "|                                           Search By ID.                                           |" <<endl;
                        cout << "Enter Guard ID: ";
                        cin >> searchId;
                        SocietyDatabase::getGuard(searchId,2);
                        cout << "\n\nPRESS ANY KEY TO GO BACK";
                        getch();
                        generateGuardMenu();
                        break;
                    case '4':
                        mainMenu();
                        break;
                    default:
                        generateGuardMenu();
                }
            }


        public:
            static void initiate(){
                mainMenu();
            }
    };
};
