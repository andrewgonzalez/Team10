//
// Created by Andrew Gonzalez on 11/8/18.
//

#include "Person.h"

Person::Person() {
    ID = 0;
    phoneNumber = 0;
    zipcode = 0;
    name = nullptr;
    address = nullptr;
    city = nullptr;
    state = nullptr;
}

Person::~Person() {
    if (name)
        delete name;
    if (address)
        delete address;
    if (city)
        delete city;
    if (state)
        delete state;
}

void Person::display() {
}


