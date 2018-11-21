/**************************************************************************************************************************************
 * Class: Provider_Service | Hierarchy: Dervied from Service
 * Description: This class help provider mananges individual member service record.
 * Features: 1. Record a new member service. 2. Display a member service details. 3. Edit service record date, time, ide, code, and fee. 
 ****************************************************************************************************************************************/

#include "service.h"

class Provider_Service : public Service
{
    public:

        Provider_Service(string date, string time, string mem_name, string serv_name, string serv_desc, int mem_id, int serv_fee, int serv_code);
        bool record_service(string date, string time, string mem_name, int mem_id, int serv_fee);
        bool edit_date(string date);
        bool edit_time(string time);
        bool edit_id(int mem_id);
        bool edit_code(int serv_code);
        bool edit_fee(int serv_fee);
        bool display_service(string record_date);

    private:
        string date;
        string time;
        string member;
        int member_id;
        int service_code;
        int service_fee;

};
