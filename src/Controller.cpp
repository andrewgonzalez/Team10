//
// Created by Andrew Gonzalez on 11/20/18.
//

#include "Controller.h"

// Default constructor
Controller::Controller() {}

// Destructor
Controller::~Controller() {}


tNode* Controller::findPerson(int treeNum, int ID) {
    tNode * found = people[treeNum].find(ID);
    if (found)
        return found;
    return nullptr;
}


int Controller::addPerson(int treeNum, string name, string address,
        string city, string state, int zipcode) {
    int ID;
    ID = generateID(treeNum);

    if (0 == treeNum) { // create Member
        Member * toAdd = new Member(ID, zipcode, name, address, city, state);
        people[treeNum].insert(ID, toAdd);
    }
    else if (1 == treeNum) { // create Provider
        Provider * toAdd = new Provider(ID, zipcode, name, address, city, state);
        people[treeNum].insert(ID, toAdd);
    }
    else if (2 == treeNum) { // create Manager
        Manager * toAdd = new Manager(ID, zipcode, name, address, city, state);
        people[treeNum].insert(ID, toAdd);
    }

    return ID;
}


int Controller::generateID(int treeNum) {
    int ID;
    std::random_device seed;
    std::mt19937 randomGenerator(seed());
    std::uniform_int_distribution<int> dist(100000000, 999999999);

    // Generate a random 9 digit number, then search the tree to see if its in use
    // already. If so generate a new one and search again. Could potentially
    // infinitely loop if all 9 digit numbers are taken.
    ID = dist(randomGenerator);
    while (people[treeNum].find(ID))
        ID = dist(randomGenerator);
    return ID;
}

void Controller::modifyName(tNode *pNode, string name) {
    Person * modifyMe = dynamic_cast<Person*>(pNode);
    if (modifyMe) {
        modifyMe->edit_name(name);
    }
}

void Controller::modifyAddress(tNode *pNode, string address) {
    Person * modifyMe = dynamic_cast<Person*>(pNode);
    if (modifyMe) {
        modifyMe->edit_address(address);
    }

}

void Controller::modifyCity(tNode *pNode, string city) {
    Person * modifyMe = dynamic_cast<Person*>(pNode);
    if (modifyMe) {
        modifyMe->edit_city(city);
    }
}

void Controller::modifyZip(tNode *pNode, int zip) {
    Person * modifyMe = dynamic_cast<Person*>(pNode);
    if (modifyMe) {
        modifyMe->edit_zip(zip);
    }
}

void Controller::modifyState(tNode *pNode, string state) {
    Person * modifyMe = dynamic_cast<Person*>(pNode);
    if (modifyMe) {
        modifyMe->edit_state(state);
    }
}

