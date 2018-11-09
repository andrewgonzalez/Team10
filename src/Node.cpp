//
// Created by Andrew Gonzalez on 11/5/18.
// Implementation file for Node.h.
//

#include "Node.h"


Node::Node() : data(0), height(0),
                left(nullptr), right(nullptr) {
}

Node::Node(int data_in) : data(data_in), height(0),
                left(nullptr), right(nullptr) {
}

//Node::~Node() = default;

void Node::display() const {
    cout <<data <<endl;
}

void Node::set_height(int h) {
    this->height = h;
}

int Node::get_height() const {
   if ( this == nullptr )
       return 0;
   else
       return this->height;
}

int Node::get_left_height() const {

}

int Node::get_right_height() const {

}

Node *& Node::get_left() {
    return left;
}

Node *& Node::get_right() {
    return right;
}

bool Node::set_left(Node & to_add) {
    left = &to_add;
    return true;
}

bool Node::set_right(Node & to_add) {
    right = &to_add;
    return true;
}

// Compare data to be inserted to data in tree
// if ( data_in >= this.data ) ? true : false;
bool Node::compare(int data_in) {
    return data_in < data || data_in == data;
}
