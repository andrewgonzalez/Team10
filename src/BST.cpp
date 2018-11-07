//
// Created by Miguel on 11/5/2018.
//

#include "BST.h"

using namespace std;

// Initialize variables
Node::Node()
{
    left = nullptr;
    right = nullptr;
}

// Delete node
Node::~Node()
{
    left = nullptr;
    right = nullptr;
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
    root = nullptr;
}

// Delete tree
BST::~BST()
{

}