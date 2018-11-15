//
// Created by thisSpectre on 11/5/2018.
//

#include "Balanced_Tree.h"
#include <iostream>

using namespace std;

int main() {
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
    /*
    // RL case
    bst.insert(1);
    bst.insert(3);
    bst.insert(2);
    //*/
    // LR case
    bst.insert(3);
    bst.insert(1);
    bst.insert(2);
    //*/
    bst.inorder();



    return 1;
}
