//
// Created by Andrew Gonzalez on 11/5/18.
// Implementation file for Node.h.
//

#include "Node.h"


Node::Node() : data(0), height(1),
                left(nullptr), right(nullptr) {
}

Node::Node(int data_in) : data(data_in), height(1),
                left(nullptr), right(nullptr) {
}

Node::~Node() {
}

void Node::display() const {
    cout <<data <<endl;
}

void Node::set_height(int h) {
    height = h;
}

int Node::get_height() {
   if (this == nullptr)
       return 0;
   else
       return this->height;
}

int Node::get_left_height() {
    if (this->get_left() == nullptr)
        return 0;
    else
        return this->get_left()->get_height();
}

int Node::get_right_height() {
    if (this->get_right() == nullptr)
        return 0;
    else
        return this->get_right()->get_height();
}

// Get balance, left->height - right->height
int Node::get_balance() {
    if (this == nullptr)
        return 0;
    return (this->get_left_height() -
            this->get_right_height());
}

void Node::set_left(Node * to_add) {
    left = to_add;
}

void Node::set_right(Node * to_add) {
    right = to_add;
}

Node *& Node::get_left() {
    return left;
}

Node *& Node::get_right() {
    return right;
}

/*
 *  Rotate left
 *  In a diagram:
 *      a                       b
 *        \                   /   \
 *         b    becomes..    a     c
 *          \
 *           c
 */
Node * Node::rotate_left(Node *& a) {
    Node * b = this->get_right();
    a = this;
    a->set_right(b->get_left());
    b->set_left(a);
    a->set_height(max(a->get_left_height(),
                         a->get_right_height()) + 1);
    b->set_height(max(b->get_left_height(),
                          b->get_right_height()) + 1);
    return b;
}

/*
Node *& Node::rotate() {
    return rotate_left(this);
}
 */

/*
 *  Rotate right
 *  In a diagram:
 *        c                     b
 *       /                    /   \
 *      b       becomes...   a     c
 *     /
 *    a
 */
Node * Node::rotate_right(Node *& c) {
    Node * b = this->get_left();
    c = this;
    c->set_left(b->get_right());
    b->set_right(c);
    b->set_height(max(b->get_left_height(),
                      b->get_right_height()) + 1);
    c->set_height(max(c->get_left_height(),
                          get_right_height()) + 1);
    return b;
}

// Compare data to be inserted to data in tree
// if (this->data >= data_in) ? true : false;
// True means we want to traverse left.
// False means we want to traverse right.
bool Node::compare(int data_in) {
    return this->data > data_in || this->data == data_in;
}

int Node::get_int() {
    return data;
}
