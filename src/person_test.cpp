//
// Created by Andrew Gonzalez on 11/6/18.
// Unit tests for Person class.
// This is meant to be the entry point for running tests on the Person class.
//

#include <iostream>
#include "Person.h"

bool defaultConstructor();
bool paramConstructor();

int main(int argc, char *argv[]) {
    using namespace std;
    bool result = false;

    // Test Person's constructors.
    cout << "Testing Person class default constructor...";
    result = defaultConstructor();
    if (result)
        cout << "PASSED" << endl;
    else
        cout << "FAILED" << endl;
    return 0;
}


// Create Person object to test the default constructor. Uses the compare
// function in the Person class to test the ID, so this also tests the
// compare function.
// Input: none
// Output: true if test passed, false otherwise
bool defaultConstructor() {
    bool result = false;
    Person * test = new Person;
    // Default ID value is 0, this should return true.
    if (test->compare(0))
        result = true;
    delete test;
    return result;
}


// Test the Person constructor that has all the data members as parameters.
// Input: none
// Output: true if test passed, false otherwise
bool paramConstructor() {
    bool result = false;
    int ID = 100;
    int zipcode = 12345;
    string name = "Andrew";
    string address;
    string city;
    string state;
    Person * testPerson = new Person(ID, zipcode, name, address, city, state);
    if (testPerson->compare(ID))
        result = true;
    delete testPerson;
    return result;
}
