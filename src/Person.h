//
// Created by Andrew Gonzalez on 11/8/18.
// Header file for the Person class.
//

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "tNode.h"

using namespace std;

class Person : public tNode {
public:
    Person();
    Person(int id, int zip, string & name, string & address,
            string & city, string & state);
    Person(const Person& copyFrom);
    ~Person() override = default;
    virtual void display();
    void setReport();  // what are we doing with this?
private:
    int ID;                 // 9 digits
    int zipcode;            // 5 digits
    string name;     // 25 characters
    string address;  // 25 characters
    string city;     // 14 characters
    string state;    // 2 characters
};


#endif //PERSON_H
