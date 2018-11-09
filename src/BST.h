//
// Created by Miguel on 11/5/2018.
//

#ifndef BST_H
#define BST_H

#include "Node.h"
#include <iostream>


class BST
{
public:

    BST();
    ~BST();

    // Call to display tree
    void display_tree();
    // Display like an actual tree
    // Very left is top of tree
    void display_tree(Node c, int indent);

    // Display tree in sorted order
    void inorder() const;

    int add(int data);

private:

    void inorder(Node *) const;
    int add(Node *&current, int data_in);
    int destroy_tree(Node *&);


protected:

    Node * root;


};

#endif
