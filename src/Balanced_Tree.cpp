//
// Created by Carlos Miguel Sayao on 07-Nov-18.
// Tree is balanced when difference between heights of
// left and right trees are less than or equal to 1.
//

#include "Balanced_Tree.h"

using namespace std;

Balanced_Tree::Balanced_Tree() {
    balance = 0;
}

Balanced_Tree::~Balanced_Tree() {

}

/*
// Test
void Balanced_Tree::rotateLeft() {
    this->root = this->root->rotate_left();
}
 */


void Balanced_Tree::insert(int data_in) {
    root = insert(root, data_in);
}

// 'c' for current
Node *& Balanced_Tree::insert(Node *& c, int data_in) {

    // Create new node
    if (c == nullptr) {
        c = new Node(data_in);
        return c;
    }

    // Compare node data. If passed in data < this data)
    // go left. Else go right.
    // bool compare(data_in) {
    // if (this->data >= data_in) ? true : false;}
    if (c->compare(data_in))
        c->set_left(insert(c->get_left(), data_in));
    else
        c->set_right(insert(c->get_right(), data_in));

    // Set height of c. Return the greater height of the
    // left or right child + 1. Add one because we are
    // counting ourselves.
    c->set_height(max(c->get_left_height(),
                      c->get_right_height()) + 1);

    // Get the balance of our current node.
    this->balance = c->get_balance();

    // Left Left case
    if (this->balance > 1 && c->get_left()->compare(data_in)) {
        c = c->rotate_right(c);
        return c;
    }

    // Right Right case
    if (this->balance < -1 && !c->get_right()->compare(data_in)) {
        c = c->rotate_left(c);
        return c;
    }

    // Left Right case
    if (this->balance > 1 && !c->get_left()->compare(data_in)) {
        //c->set_left(c->get_left()->rotate_left());
        c->get_left() = c->rotate_left(c->get_left());
        c = c->rotate_right(c);
        return c;
    }

    // Right Left case
    if (this->balance < -1 && c->get_right()->compare(data_in)) {
        //c->set_right(c->get_right()->rotate_right());
        c->get_right() = c->rotate_right(c->get_right());
        c = c->rotate_left(c);
        return c;
    }

    // Return current to last function call to connect tree
    return c;
}

// Used to compare balance of particular node
int Balanced_Tree::max(int a, int b) {
    return a > b ? a : b;
}
