//
// Created by Miguel on 11/5/2018.
//
// To try a test, add '/' to the '/*' under each title.
// Make sure to remove a '/' from the '//*' under an
// uncommented-out test or else it may not compile.
//
// If you are confused, take a look at this webpage:
// https://coderwall.com/p/zbc2zw/the-comment-toggle-trick
//


#include "Balanced_Tree.h"
#include <iostream>
#include <stdlib.h>             // For rand() function
#include <time.h>               // For rand()'s seed

using namespace std;

int main() {

    // Variable with arbitrary int to hold or ignore input
    int MAX = 100;

    Balanced_Tree bst;

    // LL case
    /*
    bst.insert(3);
    bst.insert(2);
    bst.insert(1);
    //*/

    // RR case
    /*
    bst.insert(1);
    bst.insert(2);
    bst.insert(3);
    //*/

    // LR case
    /*
    bst.insert(3);
    bst.insert(1);
    bst.insert(2);
    //*/

    // RL case
    /*
    bst.insert(1);
    bst.insert(3);
    bst.insert(2);
    //*/

    // Add any number of random numbers to tree
    /*
    int i, n;
    srand (time(NULL));
    n = rand() % 100;
    for (i = 0; i < 10; ++i) {
        cout <<n << ", ";
        bst.insert(n);
        n = rand() % 100;
    }
    cout <<"; Number of integers: " <<i <<endl;
    cout << "Number of integers in BST: " <<bst.inorder();
    //*/

    // Add chosen number of ints to tree
    /*
    int i, j, n;
    cout <<"How many integers would you like to input? ";
    cin >>j;
    cin.ignore(MAX, '\n');
    for (i = 0; i < j; ++i) {
        cout <<"Enter int: ";
        cin >>n;
        cin.ignore(MAX, '\n');
        bst.insert(n);
    }
    cout << "Number of integers in BST: " <<bst.inorder();
    //*/

    // Add any number of integers and find
    //*
    int i, n;
    srand (time(NULL));
    n = rand() % 100;
    for (i = 0; i < 10; ++i) {
        cout <<n << endl;
        bst.insert(n);
        n = rand() % 100;
    }
    bst.inorder();
    cout <<"\nEnter int to find: ";
    cin >>n;
    cin.ignore(MAX, '\n');
    if (bst.find(n))
        cout <<n <<" is in our tree." <<endl;
    else
        cout <<n <<" is not in our tree." <<endl;
    //*/

    // Test multiple



    // Test operator overloading
    /*
    tNode node1(1);
    tNode node2(2);
    tNode node3(1);

    cout <<"1 < 2: ";
    if (node1 < node2)
        cout <<"TRUE\n\n";
    else
        cout <<"FALSE\n\n";

    cout <<"2 < 1: ";
    if (node2 < node1)
        cout <<"TRUE\n\n";
    else
        cout <<"FALSE\n\n";

    cout <<"1 > 2: ";
    if (node1 > node2)
        cout <<"TRUE\n\n";
    else
        cout <<"FALSE\n\n";

    cout <<"2 > 1: ";
    if (node2 > node1)
        cout <<"TRUE\n\n";
    else
        cout <<"FALSE\n\n";

    cout <<"1 == 2: ";
    if (node1 == node2)
        cout <<"TRUE\n\n";
    else
        cout <<"FALSE\n\n";

    cout <<"1 == 1: ";
    if (node3 == node1)
        cout <<"TRUE\n\n";
    else
        cout <<"FALSE\n\n";

    cout <<"1 <= 2: ";
    if (node1 <= node2)
        cout <<"TRUE\n\n";
    else
        cout <<"FALSE\n\n";

    cout <<"1 <= 1: ";
    if (node1 <= node3)
        cout <<"TRUE\n\n";
    else
        cout <<"FALSE\n\n";

    cout <<"2 <= 1: ";
    if (node2 <= node1)
        cout <<"TRUE\n\n";
    else
        cout <<"FALSE\n\n";
    //*/


    return 1;
}
