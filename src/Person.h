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
    /*
    // Used to initialize with string literals in args
    Person(int id, int zip, string name, string address,
            string city, string state);
    */
    Person(const Person & copy_from);
    Person(const Person * copy_from);
    virtual ~Person();

    virtual void display() const;
    void edit_state(string &);
    void setReport();   // what are we doing with this?

private:

    int ID;             // 9 digits
    int zipcode;        // 5 digits
    string name;        // 25 characters
    string address;     // 25 characters
    string city;        // 14 characters
    string state;       // 2 characters

};


#endif
