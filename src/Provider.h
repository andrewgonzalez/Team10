//
// Created by Andrew Gonzalez on 11/8/18.
//

#ifndef PROVIDER_H
#define PROVIDER_H

#include <string>
#include "Person.h"

class Provider : public Person {

public:

    Provider();
    Provider(int id, int zip, string & name, string & address,
             string & city, string & state);
    Provider(const Provider & copy_from);
    Provider(const Provider * copy_from);
    ~Provider();

    void display() const;
    void addService();
    void deleteService();

private:
    //Provider_Service * head;
    //Provider_Service * tail;

};


#endif
