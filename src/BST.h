//
// Created by Miguel on 11/5/2018.
//

#ifndef BST_H
#define BST_H

#include "tNode.h"
#include <iostream>


class BST {
public:

    BST();
    ~BST();

    // Display tree in sorted order
    int inorder() const;

    // Find match
    bool find(int) const;

    int add(int data);

private:

    int inorder(tNode *) const;
    bool find(tNode *, int) const;
    int add(tNode *&current, int data_in);
    int destroy_tree(tNode *&);


protected:

    tNode * root;

};

#endif
