/************************************************************************************************************************
 * Class: Service | Hierarchy: Base Class
 * Description: This class manages individual service record details and its an object of an Linked List.
 * Features: 1. Record a new service. 2. Display a service details. 3. Edit service record code, name, and description.
 ************************************************************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Service
{
    public:
        Service(int new_code, string serv_name, string serv_desc);
        bool new_service(int new_code, string serv_name, string serv_desc);
        bool edit_code(int new_code);
        bool edit_name(string new_name);
        bool edit_desc(string new_desc);
        void display_name();
        void display_code();
        void display_desc();
        void set_next(Service * value);
        Service * get_next();

    private:
        int code;
        string name;
        string desc;
        Service * next;
};
