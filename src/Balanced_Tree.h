//
// Created by Carlos Miguel Sayao on 07-Nov-18.
//

#ifndef BALANCED_TREE_H
#define BALANCED_TREE_H

#include "BST.h"
#include "Member.h"
#include "Provider.h"
#include "Manager.h"

class Balanced_Tree: public BST {

public:

    Balanced_Tree();
    ~Balanced_Tree();

    // For testing tree with only int data
    void insert(int data_in);
    // Insert a Person
    void insert(int id, Person * to_add);

    int max(int a, int b);

private:

    tNode * insert(tNode *& c, int num);
    tNode * insert(tNode *& c, int id, Person * to_add);

    // Keep track of balance for Balanced_Tree.
    // If balance > 1 || < -1, we will need to rotate.
    int balance;

};

#endif
