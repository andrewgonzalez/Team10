//
// Created by Andrew Gonzalez on 11/8/18.
//

#include "Person.h"

Person::Person() {
    ID = 0;
    phoneNumber = 0;
    zipcode = 0;
}

Person::Person(int id, int phone, int zip,
        string & name, string & address, string & city, string & state) {
    ID = id;
    phoneNumber = phone;
    zipcode = zip;
    this->name = name;
    this->address = address;
    this->city = city;
    this->state = state;
}

void Person::display() {
}



