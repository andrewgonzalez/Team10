//Terminal.h
#include <cstdlib>
#include <iostream>
#include <string>
#include "Controller.h"

using namespace std;

class Terminal
{
  public:
    void login_menu();
    void provider_menu();
    void manager_menu();
    void operator_menu();
    void manager_operator_menu();
  private:
    void modify_person_menu(tNode *person);
    int enterID();
    int enterZip();
    string enterName();
    string enterCity();
    string enterAddress();
    string enterState();
    Controller controller;
  
};
