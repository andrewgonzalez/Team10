//
// Created by Andrew Gonzalez on 11/5/18.
// Implementation file for Node.h.
//

#include "Node.h"

Node::Node() : left(NULL) right(NULL) {
}

Node* Node::goLeft() {
    return left;
}

Node* Node::goRight() {
    return right;
}

bool Node::setLeft(Node & toAdd) {
    if (!toAdd)
        return false;
    left = toAdd;
    return true;
}

bool Node::setRight(Node & toAdd) {
    if (!toAdd)
        return false;
    right = toAdd;
    return true;
}

