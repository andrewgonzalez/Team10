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
    //~Person() override = default;
    virtual ~Person();

    void remove();

    virtual void display() const;
    void edit_name(string & name_in);
    void edit_address(string & address_in);
    void edit_city(string & city_in);
    void edit_state(string & state_in);
    void edit_zip(int zip_in);
    void set_report();   // what are we doing with this?

private:

    int ID;             // 9 digits
    int zipcode;        // 5 digits
    string name;        // 25 characters
    string address;     // 25 characters
    string city;        // 14 characters
    string state;       // 2 characters

    bool is_removed;
    bool in_good_standing;

};


#endif
