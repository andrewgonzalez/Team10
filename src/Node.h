//
// Created by Andrew Gonzalez on 11/5/18.
//

#ifndef NODE_H
#define NODE_H

class Node
{
public:
    bool setLeft(Node&);
    bool setRight(Node&);
    Node * goLeft();
    Node * goRight();
private:
    Node * left;
    Node * right;
};
#endif NODE_H
