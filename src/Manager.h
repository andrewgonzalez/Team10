//
// Created by Andrew Gonzalez on 11/8/18.
//

#ifndef MANAGER_H
#define MANAGER_H

#include <string>
#include "Person.h"

class Manager : public Person {

public:

    Manager();
    Manager(int id, int zip, string & name, string & address,
            string & city, string & state);
    Manager(const Manager & copy_from);
    ~Manager();

    void display() const;

private:

};


#endif
