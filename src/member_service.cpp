//Description: Implementation file for the Member_Service class 
#include "member_service.h"

/******************************************************************************************
 * Name: Member_Service constructor
 * Description: Set a new member record details upon instantiation. 
 * Input: Integer service code, string service name, and string service description;
 * Output: Void
 * ****************************************************************************************/
Member_Service::Member_Service(int new_day, int new_month, int new_year, int new_fees, int serv_code, string serv_name, string serv_desc, string new_time, string new_diagnosis, string new_comments, string new_doctor) : Service(serv_code, serv_name, serv_desc)
{
    new_treatment(new_day, new_month, new_year, new_fees, new_time, new_diagnosis, new_comments, new_doctor);
}

/***********************************************************************************************************
 * Name: new_service
 * Description: Add a member service record. 
 * Input: Integer day, int month, int year, int fee, string diagnosis, string comments, string doctor name.
 * Output: Return true when new service has been created successfully, else return false.
 * ********************************************************************************************************/
bool Member_Service::new_treatment(int new_day, int new_month, int new_year, int new_fees, string new_time, string new_diagnosis, string new_comments, string new_doctor)
{
    if((new_day && month && year && new_fees) && (!new_time.empty() && !new_diagnosis.empty() && !new_comments.empty() && !new_doctor.empty()))
    {
        day = new_day;
        month = new_month;
        year = new_year;
        fees = new_fees;
        time = new_time;
        diagnosis = new_diagnosis;
        comments = new_comments;
        doctor = new_doctor;
        return true;
    }
    else
        return false;
}

/*****************************************************************************************
 * Name: edit_date
 * Description: Edit member service date.
 * Input: Integer day, int month, int year.
 * Output: Return true when service date has been updated successfully, esle return false.
 * ***************************************************************************************/
bool Member_Service::edit_date (int new_day, int new_month, int new_year)
{
    if(new_day && new_month && new_year)
    {
        day = new_day;
        month = new_month;
        year = new_year;
        return true;
    }
    else
        return false;
}

/*****************************************************************************************
 * Name: edit_time
 * Description: Edit member service time.
 * Input: String new service time.
 * Output: Return true when service time has been updated successfully, esle return false.
 * ***************************************************************************************/
bool Member_Service::edit_time (string new_time)
{
    if(!new_time.empty())
        time = new_time;
    else
        return false;
    return true;
}

/*********************************************************************************************
 * Name: edit_diagnosis
 * Description: Edit member service diagnosis.
 * Input: String new service diagnosis.
 * Output: Return true when service diagnosis has been updated successfully, esle return false.
 * ********************************************************************************************/
bool Member_Service::edit_diagnosis (string new_diagnosis)
{
    if(!new_diagnosis.empty())
        diagnosis = new_diagnosis;
    else
        return false;
    return true;
}

/********************************************************************************************
 * Name: edit_comments
 * Description: Edit member service comments.
 * Input: String new service comments.
 * Output: Return true when service comments has been updated successfully, esle return false.
 * *******************************************************************************************/
bool Member_Service::edit_comments (string new_comments)
{
    if(!new_comments.empty())
        comments = new_comments;
    else
        return false;
    return true;
}

/*******************************************************************************************
 * Name: edit_doctor
 * Description: Edit member service doctor name.
 * Input: String new service doctor name.
 * Output: Return true when service doctor has been updated successfully, esle return false.
 * ******************************************************************************************/
bool Member_Service::edit_doctor (string new_doctor)
{
    if(!new_doctor.empty())
        doctor = new_doctor;
    else
        return false;
    return true;
}

/****************************************************************************************
 * Name: edit_fee
 * Description: Edit member service fee.
 * Input: String new service fee.
 * Output: Return true when service fee has been updated successfully, esle return false.
 * ***************************************************************************************/
bool Member_Service::edit_fee(int new_fee)
{
    if(new_fee)
        fees = new_fee;
    else
        return false;
    return true;
}

