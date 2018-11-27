//
// Created by Andrew Gonzalez on 11/8/18.
//

#include "Manager.h"

Manager::Manager() : Person() {

}

Manager::Manager(int id, int zip, string & name, string & address,
               string & city, string & state)
       : Person(id, zip, name, address, city, state) {

}

Manager::Manager(const Manager & copy_from) : Person(copy_from) {
}

Manager::~Manager() {

}

void Manager::display() const {
    cout <<"Manager" <<endl;
    Person::display();
}
