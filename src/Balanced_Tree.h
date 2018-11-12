//
// Created by Carlos Miguel Sayao on 07-Nov-18.
//

#ifndef BALANCED_TREE_H
#define BALANCED_TREE_H

#include "BST.h"

class Balanced_Tree: public BST {

public:

    Balanced_Tree();
    ~Balanced_Tree();

    void rotateLeft();

    void insert(int num);

    int max(int a, int b);

private:
    Node *& insert(Node *& c, int num);

    // Keep track of balance for Balanced_Tree.
    // If balance > 1, we will need to rotate.
    int balance;

};

#endif
