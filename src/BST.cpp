//
// Created by Miguel on 11/5/2018.
//

#include "BST.h"



// Initialize variables
Node::Node()
{
    data = NULL;
    left = NULL;
    right = NULL;
}

// Delete node
Node::~Node()
{
    data = NULL;
    left = NULL;
    right = NULL;
}

int Node::add(int data_in)
{
    if ( data_in )
        data = data_in;
    else
        return 0;
    return 1;
}

int Node::display()
{
    if ( data )
        cout <<data <<endl;
}

// Initialize tree to NULL
BST::BST()
{
    root = NULL;
}

// Delete tree
BST::~BST()
{

}