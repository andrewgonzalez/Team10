#include"Terminal.h"
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
                                      |       |        (m)anage provider or member     |         |        (s)earch member                      |
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
  cin>>type;
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
    cout<<"\n\t|          (m)anage member                |";//go to operator menu;
    cout<<"\n\t|          (w)eekly report                |";//call the function taht to generate member report or provider report;
    cout<<"\n\t|          (q)uit                         |";//quit from software;
    cout<<"\n\t-------------------------------------------\n\n\t";
  
    cin>>P_menu_choice;
// add according function later to each case;

    switch(P_menu_choice[0])
    {
      case 'p':cout<<"\n\tp"; break;

      case 'r':cout<<"\n\tr"; break;

      case 'm':operator_menu() ; break;

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
// add according function later to each case;

    switch(M_menu_choice[0])
    {
      case 'm': manager_operator_menu(); break;

      case 'r': cout<<"\n\tReport"; break;

      case 'q': cout<<"\n\tExiting Manager menu";

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
// add according function later to each case;

      switch(O_menu_choice[0])
      {
        case 'a': cout<<"\n\ta";break;

        case 'm': cout<<"\n\tm";break;

        case 'd': cout<<"\n\td";break;

        case 'b': break;

        default :cout<<"\n\tInvalid input!"; break;
      }
    }
  return ;
}

void Terminal::manager_operator_menu()
{ 
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

// add according function later to each case;
      switch(MO_menu_choice[0])
      {
        case 's':cout<<"\n\ts";break;

        case 'a':cout<<"\n\ta";break;

        case 'm':cout<<"\n\tm";break;

        case 'd':cout<<"\n\td";break;

        case 'S':cout<<"\n\tS";break;

        case 'A':cout<<"\n\tA";break;

        case 'M':cout<<"\n\tM";break;

        case 'D':cout<<"\n\tD";break;

        case 'b':break;

        default :cout<<"\n\t Invalid input!"; break;

      }
    }
  return ;
}







