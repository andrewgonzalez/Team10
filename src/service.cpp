//Description: Implementation file for Service class.
#include "service.h"

/******************************************************************************************
 * Name: Service constructor
 * Description: Set a new service record details upon instantiation. 
 * Input: Integer service code, string service name, and string service description;
 * Output: Void
 * ****************************************************************************************/
Service::Service(int new_code, string serv_name, string serv_desc)
{
    next = NULL;
    new_service(new_code, serv_name, serv_desc);
}

/******************************************************************************************
 * Name: new_service
 * Description: Create a new service record.
 * Input: Integer service code, string service name, and string service description.
 * Output: Return true when new service has been created successfully,  else return false.
 * ****************************************************************************************/
bool Service::new_service(int new_code, string serv_name, string serv_desc)
{
    if((new_code && !serv_name.empty() && !serv_desc.empty()))
    {
        code = new_code;
        name = serv_name;
        desc = serv_desc;
        return true;
    }
    else
        return false;
}

/**********************************************************************************************
 * Name: set_code
 * Description: Set a new service code.
 * Input: Integer 9 digits service code.
 * Output: Return true when new service code has been changed successfully,  else return false.
 * ********************************************************************************************/
bool Service::edit_code(int new_code)
{
    if(new_code)
        code = new_code;
    else
        return false;
    return true;
}

/*********************************************************************************************
 * Name: edit_name
 * Description: Set a new service name.
 * Input: String service name > 0.
 * Output: Return true when new service name has been changed successfully, else return false.
 * *******************************************************************************************/
bool Service::edit_name (string new_name)
{
    if(!new_name.empty())
        name = new_name;
    else
        return false;
    return true;
}

/*****************************************************************************************************
 * Name: edit_description
 * Description: Set a new service description.
 * Input: String service description > 0.
 * Output: Return true when new service description has been changed successfully, else return false.
 * ***************************************************************************************************/
bool Service::edit_desc (string new_desc)
{
    if(!new_desc.empty())
        desc = new_desc;
    else
        return false;
    return true;
}

/*************************************************
 * Name: display_name
 * Description: Display the current service name.
 * Input: Void.
 * Output: Void.
 * ***********************************************/
void Service::display_name()
{
    cout << name;
}

/*************************************************
 * Name: display_code
 * Description: Display the current service code.
 * Input: Void.
 * Output: Void.
 * ***********************************************/
void Service::display_code()
{
    cout << code;
}

/*******************************************************
 * Name: display_desc
 * Description: Display the current service description.
 * Input: Void.
 * Output: Void.
 * ****************************************************/
void Service::display_desc()
{
    cout << desc;
}

/********************************************
 * Name: set_next
 * Description: Set next pointer to Service.
 * Input: Service object.
 * Output: Void.
 * ******************************************/
void Service::set_next(Service * value)
{
    next = value;
}

/**************************************************
 * Name: get_next
 * Description: Return the next pointer to Service.
 * Input: Void.
 * Output: Return the left pointer to Service.
 * ************************************************/
Service * Service::get_next()
{
    return next;
}

