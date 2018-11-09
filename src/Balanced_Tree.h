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

    void insert( int num );
    Node* insert( Node c, int num );

    int max( int a, int b );


private:

    // Keep track of balance of particular node
    int balance;

};

#endif
