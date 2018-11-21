/*********************************************************************************************************************************************************
 * Class: Member_Service | Hierarchy: Dervied from Service
 * Description: This class help mananges member treatment information.
 * Features: 1. Record a new treatment. 2. Display a trtreatment details. 3. Edit treatment record date, time, diagnosis, comments, doctor name, and fees. 
 **********************************************************************************************************************************************************/

#include "service.h"

class Member_Service : public Service
{
    public: 
        Member_Service(int new_day, int new_month, int new_year, int new_fees, int serv_code, string serv_name, string serv_desc, string new_time, string new_diagnosis, string          new_comments, string new_doctor);
        bool new_treatment (int new_day, int new_month, int new_year, int new_fees, string new_time, string new_diagnosis, string new_comments, string new_doctor);
        bool edit_date (int new_day, int new_month, int new_year);
        bool edit_time (string new_time);
        bool edit_diagnosis (string new_diagnosis);
        bool edit_comments (string new_comments);
        bool edit_doctor (string new_doctor);
        bool edit_fee (int new_fee);

    private:
        int day;
        int month;
        int year;
        int fees;
        string time;
        string diagnosis;
        string comments;
        string doctor;
};
