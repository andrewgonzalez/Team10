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

// Wrapper for our recursive call
void Balanced_Tree::insert(int id, Person * to_add) {
    root = insert(root, id, to_add);
}

tNode * Balanced_Tree::insert(tNode *& c, int id, Person * to_add) {

    // Connect up
    if (c == nullptr) {
        c = to_add;
        return c;
    }

    // Compare node data. If passed in data < this data
    // go left. Else go right.
    if (*c == id){
        cout <<"This integer is already in the database. Try again." <<endl;
        return c;
    }
    if (*c > id)
        c->set_left(insert(c->get_left(), id, to_add));
    else
        c->set_right(insert(c->get_right(), id, to_add));

    // Set height of c. Return the greater height of the
    // left or right child + 1. Add one because we are
    // counting ourselves.
    c->set_height(max(c->get_left_height(),
                      c->get_right_height()) + 1);

    // Get the balance of our current node.
    this->balance = c->get_balance();

    // Left Left case
    if (this->balance > 1 && *c->get_left() > id) {
        c = c->rotate_right(c);
    }

    // Right Right case
    if (this->balance < -1 && *c->get_right() < id) {
        c = c->rotate_left(c);
    }

    // Left Right case
    // Perform left rotation on c->left
    // Then right rotation on c->left
    if (this->balance > 1 && *c->get_left() < id) {
        c = c->lr_rotate(c);
    }

    // Right Left case
    if (this->balance < -1 && *c->get_right() > id) {
        c = c->rl_rotate(c);
    }

    // Return current to last function call to connect tree
    return c;
}

// Used to compare balance of particular node.
// Return the greatest of the two args.
int Balanced_Tree::max(int a, int b) {
    return a > b ? a : b;
}
