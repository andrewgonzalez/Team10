//
// Created by Andrew Gonzalez on 11/20/18.
//

#include "Controller.h"

// Default constructor
Controller::Controller() {}

// Destructor
Controller::~Controller() {}

tNode* Controller::findPerson(int tree, int ID) {
    tNode * found = people[tree].find(ID);
    if (found)
        return found;
    return nullptr;
}

//