//
// Created by petar on 11/8/2018.
//

#include "Provider_Directory.h"

Provider_Directory::Provider_Directory() {
    service_number = 0;
    service_fee = 0;
    dir_next = nullptr;
}


void Provider_Directory::Set_Dir_Next(Provider_Directory *& connect)
{
	dir_next = connect;
}


Provider_Directory *& Provider_Directory::Return_Dir_Next()
{
	return dir_next;
}


void Provider_Directory::Add_Entry(string tempname, int tempnumber, int tempfee) {
    if(service_name.empty())
        service_name.clear();
    service_name = tempname;

    service_number = tempnumber;
    service_fee = tempfee;
    dir_next = nullptr;
}


bool Provider_Directory::Compare_Directory_Service(Provider_Directory * tocompare)
{
	return service_number < tocompare->service_number;
}


void Provider_Directory::Directory_Display(){
    if(service_name.empty()) {
        cout << "There is nothing to display" << endl;
        return;
    }

    cout << "Service Name: " << service_name << endl;
    cout << "Service Number: " << service_number << endl;
    cout << "Service Fee: " << service_fee << endl <<endl;
}

const string &Provider_Directory::getService_name() const {
    return service_name;
}

int Provider_Directory::getService_number() const {
    return service_number;
}

int Provider_Directory::getService_fee() const {
    return service_fee;
}
