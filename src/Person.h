//
// Created by Andrew Gonzalez on 11/8/18.
//

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "Node.h"

class Person : public Node {
public:
    Person();
    virtual ~Person();
    virtual void display();
private:
    int ID;                 // 9 digits
    int phoneNumber;        // 10 digits
    int zipcode;            // 5 digits
    std::string * name;     // 25 characters
    std::string * address;  // 25 characters
    std::string * city;     // 14 characters
    std::string * state;    // 2 characters
};


#endif PERSON_H
