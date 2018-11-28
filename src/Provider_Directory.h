//
// Created by petar on 11/8/2018.
//

#ifndef TEAM10_PROVIDER_DIRECTORY_H
#define TEAM10_PROVIDER_DIRECTORY_H
#include "tNode.h"

//For Simplicity, I switched this to a simple LLL. It takes a service available and displays its service name, number, and fee. This class represents a single service within the list of all available services. 
//
//
class Provider_Directory
{
public:
    Provider_Directory();
    ~Provider_Directory() = default;
    void Set_Dir_Next(Provider_Directory *& connect);
    Provider_Directory *& Return_Dir_Next();
    void Add_Entry(string tempname, int tempnumber, int tempfee);
    bool Compare_Directory_Service(Provider_Directory * tocompare);
    void Directory_Display();
    const string &getService_name() const;
    int getService_number() const;
    int getService_fee() const;

protected:
    string service_name;
    int service_number;
    int service_fee;
    Provider_Directory * dir_next;
};

#endif
