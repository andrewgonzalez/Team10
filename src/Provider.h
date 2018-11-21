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
    ~Provider();
    void display();
    void addService();
    void deleteService();
private:
    //Provider_Service * head;
    //Provider_Service * tail;
};


#endif //PROVIDER_H
