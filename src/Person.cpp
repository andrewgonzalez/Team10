//
// Created by Andrew Gonzalez on 11/8/18.
//

#include <iostream>
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
    cout << name << endl;
    cout << "Phone#: " << phoneNumber << endl;
    cout << address << endl;
    cout << city << ", " << state << endl;
    cout << zipcode << endl;
}

bool Person::compare(int match) {
    return match == ID;
}

void Person::setReport() {
}



