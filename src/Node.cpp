//
// Created by Andrew Gonzalez on 11/5/18.
// Implementation file for Node.h.
//

#include "Node.h"

Node::Node() : left(nullptr), right(nullptr) {
}

Node::~Node() {
    left = nullptr;
    right = nullptr;
}

Node* Node::goLeft() {
    return left;
}

Node* Node::goRight() {
    return right;
}

bool Node::setLeft(Node & toAdd) {
    left = &toAdd;
    return true;
}

bool Node::setRight(Node & toAdd) {
    right = &toAdd;
    return true;
}

