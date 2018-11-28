//
// Created by Andrew Gonzalez on 11/20/18.
// The Controller is the component that connects the Terminal to the data
// structures in the rest of this project.
//

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>
#include <random>
#include "Balanced_Tree.h"

class Controller {
public:
    Controller();
    ~Controller();
    tNode* findPerson(int treeNum, int ID);
    int addPerson(int treeNum);
private:

    int enterZip();
    int generateID(int treeNum);

    // 0 is Member's tree
    // 1 is Provider's tree
    // 2 is Manager's tree
    Balanced_Tree people[3];

    // Defining some constants for input limitations
    const int NAMESIZE = 25;
    const int CITYSIZE = 14;
    const int STATESIZE = 2;
};
#endif //CONTROLLER_H
