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

/*
// Constructor taking all data members as parameters. String
// args take literals here (you may place a literal string
// into the constructor argument with DOUBLE quotation marks).
Person::Person(int id, int zip, string name, string address,
       string city, string state) {
    ID = id;
    zipcode = zip;
    this->name = name;
    this->address = address;
    this->city = city;
    this->state = state;
}
 */

// Copy constructor.
Person::Person(const Person & copy_from) : tNode() {
    ID = copy_from.ID;
    zipcode = copy_from.zipcode;
    name = copy_from.name;
    address = copy_from.address;
    city = copy_from.city;
    state = copy_from.state;
}

Person::Person(const Person * copy_from) : tNode() {
    ID = copy_from->ID;
    zipcode = copy_from->zipcode;
    name = copy_from->name;
    address = copy_from->address;
    city = copy_from->city;
    state = copy_from->state;
}

Person::~Person() {

}

// Print Person data members to the standard output.
// Input: none
// Output: void
void Person::display() const {
    cout <<std::left <<setw(13) <<ID
         <<setw(15) <<name
         <<std::right <<setw(15) <<address
         <<", " <<city
         <<", " <<state
         <<", " <<zipcode
         <<endl;
}

void Person::edit_state(string & state_in) {
    state = state_in;
}

void Person::setReport() {
}


