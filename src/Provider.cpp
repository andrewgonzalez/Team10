//
// Created by Andrew Gonzalez on 11/8/18.
//

#include "Provider.h"

Provider::Provider() : Person() {

}

Provider::Provider(int id, int zip, string & name, string & address,
               string & city, string & state)
       : Person(id, zip, name, address, city, state) {

}

Provider::Provider(const Provider & copy_from) : Person(copy_from) {
}

Provider::Provider(const Provider * copy_from) : Person(copy_from) {
}

Provider::~Provider() {

}

void Provider::display() const {
    cout <<"Provider" <<endl;
    Person::display();
}
