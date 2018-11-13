//
// Created by Andrew Gonzalez on 11/8/18.
// Implementation file for Person.h.
//

#include <iostream>
#include "Person.h"

// Default constructor
Person::Person() : Node() {
    ID = 0;
    //phoneNumber = 0;
    zipcode = 0;
}

// Copy constructor.
Person::Person(const Person& copyFrom) : Node(copyFrom) {
    ID = copyFrom.ID;
    //phoneNumber = copyFrom.phoneNumber;
    zipcode = copyFrom.zipcode;
    name = copyFrom.name;
    address = copyFrom.address;
    city = copyFrom.city;
    state = copyFrom.state;
}

// Constructor taking all data members as parameters.
Person::Person(int id, int zip, string & name, string & address,
        string & city, string & state) {
    ID = id;
    //phoneNumber = phone;
    zipcode = zip;
    this->name = name;
    this->address = address;
    this->city = city;
    this->state = state;
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

// Compare passed in ID with the Person's ID.
// Input: int of the ID to compare with.
// Output: true if they match, false otherwise.
bool Person::compare(const int match) {
    return match == ID;
}

void Person::setReport() {
}



