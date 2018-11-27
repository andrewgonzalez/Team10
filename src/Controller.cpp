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


int Controller::addPerson(int treeNum) {
    char nameInput[NAMESIZE + 1];
    int zipcode, ID;
    string name, address, city, state;

    cout << "Enter a name (" << NAMESIZE << " char max): ";
    cin.get(nameInput, NAMESIZE + 1);
    cin.ignore(100, '\n');
    name = nameInput;

    cout << "Enter their street address (" << NAMESIZE << " char max): ";
    cin.get(nameInput, NAMESIZE + 1);
    cin.ignore(100, '\n');
    address = nameInput;

    cout << "Enter their city (" << CITYSIZE << " char max): ";
    cin.get(nameInput, CITYSIZE + 1);
    cin.ignore(100, '\n');
    city = nameInput;

    zipcode = enterZip();

    cout << "Enter the state (" << STATESIZE << " chars, such as OR): ";
    cin.get(nameInput, STATESIZE + 1);
    cin.ignore(100, '\n');
    state = nameInput;

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


int Controller::enterZip() {
    // Default value of -1 so if somehow the input doesn't work then the
    // zip code will be an obvious invalid entry.
    int zip = -1;

    cout << "Please enter the 5 digit zip code: ";
    cin >> zip;
    cin.ignore(100, '\n');
    cin.clear();
    return zip;
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
