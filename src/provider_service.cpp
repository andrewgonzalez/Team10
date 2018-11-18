//Description: Implementation file for Provider_Service class
#include "provider_service.h"

/*********************************************************************************************
 * Name: Provider_Service constructor
 * Description: Create a new provider service record details upon instantiation. 
 * Input: String date, string time, string member name, int member id, and int service fee.
 * Output: Void
 * ******************************************************************************************/
Provider_Service::Provider_Service(string date, string time, string mem_name, string serv_name, string serv_desc, int mem_id, int serv_fee, int serv_code) :
    Service(serv_code, serv_name, serv_desc)
{
    record_service(date, time, mem_name, mem_id, serv_fee);
}

/***********************************************************************************************
 * Name: record_service
 * Description: Create a new provider service record.
 * Input: String date, string time, string member name, int member id, and int service fee.
 * Output: Return true when a new service record has been created succesfully, else return false.
 * *********************************************************************************************/
bool Provider_Service::record_service(string new_date, string new_time, string mem_name, int mem_id, int serv_fee)
{
    if((mem_id && serv_fee) && (!new_date.empty() && !new_time.empty() && !mem_name.empty()))
    {
        member_id = mem_id;
        member = mem_name;
        date = new_date;
        time = new_time;
        return true;
    }
    else
        return false;
}

/**********************************************************************************************
 * Name: edit_date
 * Description: Edit the service record date.
 * Input: String new service date.
 * Output: Return true when a new service date has been changed successfully, else return false 
 * ********************************************************************************************/
bool Provider_Service::edit_date(string new_date)
{
    if(!new_date.empty())
        date = new_date;
    else
        return false;
    return true;
}

/**********************************************************************************************
 * Name: edit_time
 * Description: Edit the service record time.
 * Input: String new service time.
 * Output: Return true when a new service time has been changed successfully, else return false 
 * ********************************************************************************************/
bool Provider_Service::edit_time(string new_time)
{
    if(!new_time.empty())
        time = new_time;
    else
        return false;
    return true;
}

/***************************************************************************************************
 * Name: edit_id
 * Description: Edit the service record member id.
 * Input: Intger new service member id.
 * Output: Return true when a new service member id has been changed successfully, else return false 
 * **************************************************************************************************/
bool Provider_Service::edit_id(int mem_id)
{
    if(mem_id)
        member_id = mem_id;
    else
        return false;
    return true;
}

/***********************************************************************************************
 * Name: edit_code
 * Description: Edit the service record code.
 * Input: Integer new service code.
 * Output: Return true when a new service code has been changed successfully, else return false 
 * *********************************************************************************************/
bool Provider_Service::edit_code(int serv_code)
{
    if(serv_code)
        service_code = serv_code;
    else
        return false;
    return true;
}

/**********************************************************************************************
 * Name: edit_fee
 * Description: Edit the service record fee.
 * Input: Integer new service fee..
 * Output: Return true when a new service fee has been changed successfully, else return false 
 * ********************************************************************************************/
bool Provider_Service::edit_fee(int serv_fee)
{
    if(serv_fee)
        service_fee = serv_fee;
    else
        return false;
    return true;
}

/**********************************************************************************************
 * Name: display_service
 * Description: Display the full service record for a particular date. 
 * Input: Integer record date to display.
 * Output: If record date match current date, display record information and return true.
 * else, return false
 * ********************************************************************************************/
bool Provider_Service::display_service(string record_date)
{
    if(date.compare(record_date) == 0)
    {
        cout << "Date: " << date << " " << "Time: " << time << endl;
        cout << "Service Code: ";
        display_code();
        cout << " " << "Name:";
        display_name();
        cout << "Fees: " << service_fee << endl;
        cout << "Member ID: " << member_id << " " << "Name: " << member << endl;
        cout << "Description: ";
        display_desc();
    }
    else 
        return false;
    return true;
}

