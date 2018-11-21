//
// Created by Andrew Gonzalez on 11/5/18.
// Implementation file for tNode.h.
//

#include "tNode.h"

using namespace std;

//FOR INT TYPE
tNode::tNode() : data(0), height(1),
                left(nullptr), right(nullptr) {
}

tNode::tNode(int data_in) : data(data_in), height(1),
                left(nullptr), right(nullptr) {
}

tNode::tNode(const tNode & copyFrom) : data(copyFrom.data), height(copyFrom.height),
    left(copyFrom.left), right(copyFrom.right) {
}

tNode::~tNode() {
}

void tNode::display() const {
    cout <<data <<endl;
}

void tNode::set_height(int h) {
    height = h;
}

int tNode::get_height() {
   if (this == nullptr)
       return 0;
   else
       return this->height;
}

int tNode::get_left_height() {
    if (this->get_left() == nullptr)
        return 0;
    else
        return this->get_left()->get_height();
}

int tNode::get_right_height() {
    if (this->get_right() == nullptr)
        return 0;
    else
        return this->get_right()->get_height();
}

// Get balance, left->height - right->height
int tNode::get_balance() {
    if (this == nullptr)
        return 0;
    return (this->get_left_height() -
            this->get_right_height());
}

void tNode::set_left(tNode * to_add) {
    if (this == nullptr)
        return;
    else
        left = to_add;
}

void tNode::set_right(tNode * to_add) {
    if (right == nullptr)
        right = nullptr;
    else
        right = to_add;
}

tNode *& tNode::get_left() {
    return left;
}

tNode *& tNode::get_right() {
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
tNode * tNode::rotate_left(tNode *& current) {
    tNode *temp = current->right;
    current->right = temp->left;
    temp->left = current;
    current->set_height(max(current->get_left_height(),
                      current->get_right_height()) + 1);
    temp->set_height(max(temp->get_left_height(),
                      temp->get_right_height()) + 1);
    return temp;
}

/*
 *  Rotate right
 *  In a diagram:
 *        c       b         a       a
 *       /      /   \        \       \
 *      b   -> a     c  OR    b ->     b
 *     /                      /         \
 *    a                      c           c (pivot)
 */
tNode * tNode::rotate_right(tNode *& current) {
    tNode * temp = current->left;
    current->left = temp->right;
    temp->right = current;
    current->set_height(max(current->get_left_height(),
                            current->get_right_height()) + 1);
    temp->set_height(max(temp->get_left_height(),
                      temp->get_right_height()) + 1);
    return temp;
}

// For LR case
tNode * tNode::lr_rotate(tNode *& top) {
    top->left = rotate_left(top->left);
    return rotate_right(top);
}

// For RL case
tNode * tNode::rl_rotate(tNode *& top) {
    top->right = rotate_right(top->right);
    return rotate_left(top);
}

// NOT USED
// Compare data to be inserted to data in tree
// if (this->data >= data_in) ? true : false;
// True means we want to traverse left.
// False means we want to traverse right.
bool tNode::compare(int data_in) {
    return this->data > data_in || this->data == data_in;
}

// THIS SECTION RESERVED IN CASE WE MUST COMPARE TWO NODES
/*
tNode& tNode::operator = (tNode & node_in) {
    *this = node_in;
    return *this;
}
 */

/*
bool tNode::operator < (tNode & to_compare) const {
    if (this->data < to_compare.data)
        return true;
    return false;
}

bool tNode::operator > (tNode & to_compare) const {
    if (this->data > to_compare.data)
        return true;
    return false;
}

bool tNode::operator <= (tNode & to_compare) const {
    if (this->data <= to_compare.data)
        return true;
    return false;
}

bool tNode::operator == (tNode & to_compare) const {
    if (this->data == to_compare.data)
        return true;
    return false;
}
 */

bool tNode::operator < (int to_compare) const {
    if (this->data < to_compare)
        return true;
    return false;
}

bool tNode::operator > (int to_compare) const {
    if (this->data > to_compare)
        return true;
    return false;
}

bool tNode::operator <= (int to_compare) const {
    if (this->data <= to_compare)
        return true;
    return false;
}

bool tNode::operator == (int to_compare) const {
    if (this->data == to_compare)
        return true;
    return false;
}

int tNode::get_int() {
    return data;
}
