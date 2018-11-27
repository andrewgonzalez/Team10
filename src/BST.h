//
// Created by Miguel on 11/5/2018.
//

#ifndef BST_H
#define BST_H

#include "tNode.h"
#include "Person.h"
#include <iostream>

class BST {

public:

    BST();
    ~BST();

    int inorder() const;        // Display tree in sorted order

    tNode * find(int);          // Find match

private:

    int inorder(tNode *) const;
    tNode * find(tNode *, int);

    int destroy_tree(tNode *&);

protected:

    tNode * root;

};

#endif
