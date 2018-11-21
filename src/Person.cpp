//
// Created by Andrew Gonzalez on 11/8/18.
// Implementation file for Person.h.
//

#include <iostream>
#include "Person.h"

// Default constructor
Person::Person() : tNode() {
    ID = 0;
    zipcode = 0;
}


// Constructor taking all data members as parameters.
Person::Person(int id, int zip, string & name, string & address,
        string & city, string & state) : tNode(id) {
    ID = id;
    zipcode = zip;
    this->name = name;
    this->address = address;
    this->city = city;
    this->state = state;
}


// Copy constructor.
Person::Person(const Person& copyFrom) : tNode(copyFrom) {
    ID = copyFrom.ID;
    zipcode = copyFrom.zipcode;
    name = copyFrom.name;
    address = copyFrom.address;
    city = copyFrom.city;
    state = copyFrom.state;
}


// Person class destructor.
Person::~Person() {
}


// Print Person data members to the standard output.
// Input: none
// Output: void
void Person::display() {
    cout << name << endl;
    //cout << "Phone#: " << phoneNumber << endl;
    cout << address << endl;
    cout << city << ", " << state << endl;
    cout << zipcode << endl;
}


void Person::setReport() {
}



