#include "Terminal.h"
#include "Controller.h"
#include "Provider_Directory.h"
#include "Person.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
/*
 *                                            ---------------Provider Menu---------------        ---------------Provider opeartor---------------  
 *                                            |                                         |        |                                             |
 *                                            |          (p)rovide service to member    |        |        (a)dd member                         |
 *                                    |------>|          (r)equest provider directory   |   m    |        (m)odify member                      |
                    ---------------   |       |          (m)anage member                |------->|        (d)elete member                      |
               ---->|provider_menu|---|       |          (w)eekly report                |        |        (b)ack                               |
------------   |    ---------------           |          (q)uit                         |        -----------------------------------------------
|login_menu|---|                              -------------------------------------------
------------   |    --------------
               ---->|manager_menu|----|       ---------------Manager Menu---------------         ---------------Provider opeartor---------------  
                    --------------    |       |                                        |         |                                             |
                                      |       |        (m)anage provider or member     |    m    |        (s)earch member                      |
                                      |------>|        (r)equest weekly report         |-------->|        (a)dd member                         |
                                              |        (q)uit                          |         |        (m)odify member                      |
                                              ------------------------------------------         |        (d)elete member                      |
                                                                                                 |        (S)earch provider                    |
                                                                                                 |        (A)dd provider                       |
                                                                                                 |        (M)odify provider                    |
                                                                                                 |        (D)elete provider                    |
                                                                                                 |        (b)ack                               |
                                                                                                 -----------------------------------------------
*/
void Terminal::login_menu()                  
{
  cout<<"\n\t---------------Welcome to chocAn---------------";
  cout<<"\n\tLess choc make An excellent life!!!";
  cout<<"\n\tPlease input your ID:";
  //call validate function,and return the user type:0-member(invalid);1-provider;2-manager;
  int type;
  cin>>type;//this is just for testing
  cin.ignore(100, '\n');
  switch(type)
  {
    case 1: provider_menu(); break;
    case 2: manager_menu(); break;
    default: break;
  }
  return;
}

void Terminal::provider_menu()
{
  char P_menu_choice[10];
  while(P_menu_choice[0]!='q')
  {

    cout<<"\n\t---------------Provider Menu---------------";
    cout<<"\n\t|                                         |";
    cout<<"\n\t|          (p)rovide service to member    |";//call the function that to validate member ID and select service and comment and record;
    cout<<"\n\t|          (r)equest provider directory   |";//call the function that to search services or display all services;
    //cout<<"\n\t|          (m)anage member                |";//go to operator menu;
    cout<<"\n\t|          (w)eekly report                |";//call the function taht to generate member report or provider report;
    cout<<"\n\t|          (q)uit                         |";//quit from software;
    cout<<"\n\t-------------------------------------------\n\n\t";
  
    cin>>P_menu_choice;
    cin.ignore(100, '\n');
// add according function later to each case;

    switch(P_menu_choice[0])
    {
      case 'p':cout<<"\n\tp"; break;

      case 'r':cout<<"\n\tr"; break;

      //case 'm':operator_menu() ; break;

      case 'w':cout<<"\n\treport"/*report_menu()*/ ; break;

      case 'q':cout<<"\n\tExiting Provider menu"; break;

      default :cout<<"\n\t Invalid input!";
    }
  }
  return ;
}

void Terminal::manager_menu()
{
  char M_menu_choice[10];
  while(M_menu_choice[0]!='q')
  {
    cout<<"\n\t---------------Manager Menu---------------";
    cout<<"\n\t|                                        |";
    cout<<"\n\t|        (m)anage provider or member     |";//go to manager_operator_menu;
    cout<<"\n\t|        (r)equest weekly report         |";//call the function that to generate manager report;
    cout<<"\n\t|        (q)uit                          |";//quit from software;
    cout<<"\n\t------------------------------------------\n\n\t"; 
    
    cin>>M_menu_choice;
    cin.ignore(100, '\n');
// add according function later to each case;

    switch(M_menu_choice[0])
    {
      case 'm':
        manager_operator_menu();
        break;

      case 'r':
//        cout<<"\n\tReport";
        Provider_Directory.Directory_Display();
        break;

      case 'q':
        cout<<"\n\tExiting Manager menu";
        break;

      default : cout<<"\n\t Invalid input!";break;
    }
  }
  return ;
}

void Terminal::operator_menu()
{ 
    char O_menu_choice[10];
    while(O_menu_choice[0]!='b')
      {
        cout<<"\n\t---------------Provider opeartor---------------";
        cout<<"\n\t|                                             |";
        cout<<"\n\t|        (a)dd member                         |";//call add member;
        cout<<"\n\t|        (m)odify member                      |";//call modify member;
        cout<<"\n\t|        (d)elete member                      |";//call delete member;
        cout<<"\n\t|        (b)ack                               |";//back to provider_menu;
        cout<<"\n\t-----------------------------------------------\n\n\t"; 

      cin>>O_menu_choice;
      cin.ignore(100, '\n');
// add according function later to each case;

      switch(O_menu_choice[0])
      {
         case 'a':
          //cout<<"\n\ta";
          string name = enterName();
          string address = enterAddress();
          string city = enterCity();
          int zipcode = enterZip();
          string state = enterState();
          int ID = controller.addPerson(0, name, address, city, state, zipcode);
          if (ID) {
            cout << "Member added!" << endl;
            cout << "Their ID is: " << ID << endl;
          } else
            cout << "Member not added." << endl;
          break;

        case 'm':
          //cout<<"\n\tm";
          int ID = enterID();
          found = controller.findPerson(0, ID);
          if (found) {
              modify_person_menu(found);
          } else
            cout << "Member not found." << endl;
          break;

        case 'd': 
          int ID = enterID();
          tnode* found=controller.findPerson(0,ID)
          if(found){
            tnode.remove();
          }
          else
            cout << "Member not found." << endl;
          break;

        case 'b': break;

        default :cout<<"\n\tInvalid input!"; break;
      }
    }
  return ;
}

void Terminal::manager_operator_menu()
{
    int ID, zipcode;
    tNode* found;
    string name, address, city, state;
    char MO_menu_choice[10];
    while(MO_menu_choice[0]!='b')
    {
      cout<<"\n\t---------------Provider opeartor---------------";//call according function;
      cout<<"\n\t|                                             |";
      cout<<"\n\t|        (s)earch member                      |";
      cout<<"\n\t|        (a)dd member                         |";
      cout<<"\n\t|        (m)odify member                      |";
      cout<<"\n\t|        (d)elete member                      |";
      cout<<"\n\t|        (S)earch provider                    |";
      cout<<"\n\t|        (A)dd provider                       |";
      cout<<"\n\t|        (M)odify provider                    |";
      cout<<"\n\t|        (D)elete provider                    |";
      cout<<"\n\t|        (b)ack                               |";
      cout<<"\n\t-----------------------------------------------\n\n\t"; 

      cin>>MO_menu_choice;
      cin.ignore(100, '\n');

// add according function later to each case;
      ID = 0; // reset ID value
      switch(MO_menu_choice[0])
      {
        case 's':
          //cout<<"\n\ts";
          ID = enterID();
          found = controller.findPerson(0, ID);
          if (found) {
            cout << "Member found:" << endl;
            found->display();
          } else
            cout << "Member not found!" << endl;
          break;

        case 'a':
          //cout<<"\n\ta";
          name = enterName();
          address = enterAddress();
          city = enterCity();
          zipcode = enterZip();
          state = enterState();
          ID = controller.addPerson(0, name, address, city, state, zipcode);
          if (ID) {
            cout << "Member added!" << endl;
            cout << "Their ID is: " << ID << endl;
          } else
            cout << "Member not added." << endl;
          break;

        case 'm':
          //cout<<"\n\tm";
          ID = enterID();
          found = controller.findPerson(0, ID);
          if (found) {
              modify_person_menu(found);
          } else
            cout << "Member not found." << endl;
          break;

        case 'd':
          ID = enterID();
          tnode* found=controller.findPerson(0,ID)
          if(found){
            tnode.remove();
          }
          else
            cout << "Member not found." << endl;
          break;

        case 'S':
          //cout<<"\n\tS";
          ID = enterID();
          found = controller.findPerson(1, ID);
          if (found) {
            cout << "Member found:" << endl;
            found->display();
          } else
            cout << "Member not found!" << endl;
          break;

        case 'A':
          //cout<<"\n\tA";
            name = enterName();
            address = enterAddress();
            city = enterCity();
            zipcode = enterZip();
            state = enterState();
          ID = controller.addPerson(1, name, address, city, state, zipcode);
          if (ID) {
            cout << "Provider added!" << endl;
            cout << "Their ID is: " << ID << endl;
          } else
            cout << "Provider not added." << endl;
          break;

        case 'M':
          //cout<<"\n\tM";
          ID = enterID();
          found = controller.findPerson(1, ID);
          if (found) {
              modify_person_menu(found);
          } else
              cout << "Member not found." << endl;
          break;

        case 'D':
          ID = enterID();
          tnode* found=controller.findPerson(1,ID)
          if(found){
            tnode.remove();
          }
          else
            cout << "Provider not found." << endl;
          break;

        case 'b':
          break;

        default:
          cout<<"\n\t Invalid input!";
          break;

      }
    }
  return ;
}


void Terminal::modify_person_menu(tNode *person) {
  int zipcode;
  string name, address, city, state;
  char mod_menu_choice[10];
  while (mod_menu_choice[0] != 'b') {
    cout<<"\n\t---------------Edit Member/Provider -----------";
    cout<<"\n\t|                                             |";
    cout<<"\n\t|        Edit (n)ame                          |";
    cout<<"\n\t|        Edit (a)ddress                       |";
    cout<<"\n\t|        Edit (c)ity                          |";
    cout<<"\n\t|        Edit (z)ipcode                       |";
    cout<<"\n\t|        Edit (s)tate                         |";
    cout<<"\n\t|        (b)ack                               |";
    cout<<"\n\t-----------------------------------------------\n\n\t";

    cin>>mod_menu_choice;
    cin.ignore(100, '\n');

    switch (mod_menu_choice[0]) {
        case 'n':
            name = enterName();
            controller.modifyName(person, name);
          break;
        case 'a':
            address = enterAddress();
            controller.modifyAddress(person, address);
          break;
        case 'c':
            city = enterCity();
            controller.modifyCity(person, city);
          break;
        case 'z':
            zipcode = enterZip();
            controller.modifyZip(person, zipcode);
          break;
        case 's':
            state = enterState();
            controller.modifyState(person, state);
          break;
    }
  }
}


int Terminal::enterID() {
  int ID = -1;
  cout << "Please enter the user ID: ";
  cin >> ID;
  if (!cin || cin.fail()) {
    cout << "Invalid input. Please try again." << endl;
    cin.clear();
    cin.ignore(100, '\n');
    return -1;
  }
  return ID;
}


string Terminal::enterName() {
    int NAMESIZE = 25;
    char input[NAMESIZE + 1];
    cout << "Enter a name (" << NAMESIZE << " char max): ";
    cin.get(input, NAMESIZE + 1);
    cin.ignore(100, '\n');
    return input;
}

string Terminal::enterCity() {
    int CITYSIZE = 14;
    char input[CITYSIZE + 1];
    cout << "Enter their city (" << CITYSIZE << " char max): ";
    cin.get(input, CITYSIZE + 1);
    cin.ignore(100, '\n');
    return input;
}

string Terminal::enterAddress() {
    int ADDRESSSIZE = 25;
    char input[ADDRESSSIZE + 1];
    cout << "Enter their street address (" << ADDRESSSIZE << " char max): ";
    cin.get(input, ADDRESSSIZE + 1);
    cin.ignore(100, '\n');
    return input;
}

string Terminal::enterState() {
    int STATESIZE = 2;
    char input[STATESIZE + 1];
    cout << "Enter the state (" << STATESIZE << " chars, such as OR): ";
    cin.get(input, STATESIZE + 1);
    cin.ignore(100, '\n');
    return input;
}

int Terminal::enterZip() {
    // Default value of -1 so if somehow the input doesn't work then the
    // zip code will be an obvious invalid entry.
    int zip = -1;

    cout << "Please enter the 5 digit zip code: ";
    cin >> zip;
    cin.ignore(100, '\n');
    cin.clear();
    return zip;
}
