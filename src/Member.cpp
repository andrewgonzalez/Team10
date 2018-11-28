//
// Created by Andrew Gonzalez on 11/8/18.
//

#include "Member.h"

Member::Member() : Person() {

}

Member::Member(int id, int zip, string & name, string & address,
               string & city, string & state)
       : Person(id, zip, name, address, city, state) {

}

Member::Member(const Member & copy_from) : Person(copy_from) {
}

Member::~Member() {

}

void Member::display() const {
    Person::display();
}

