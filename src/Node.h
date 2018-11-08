//
// Created by Andrew Gonzalez on 11/5/18.
// Node class header file. Base class for the Person hierarchy.
//

#ifndef NODE_H
#define NODE_H

class Node
{
public:
    Node();
    Node * goLeft();
    Node * goRight();
    bool setLeft(Node & toAdd);
    bool setRight(Node & toAdd);
    bool compare(int i);
private:
    int data;
    Node * left;
    Node * right;
};
#endif NODE_H
