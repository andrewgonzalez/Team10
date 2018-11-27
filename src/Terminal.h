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
    int enterID();
    Controller controller;
  
};
