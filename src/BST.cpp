//
// Created by Miguel on 11/5/2018.
//

#include "BST.h"

using namespace std;


// Initialize tree to NULL
BST::BST()
{
    root = nullptr;
}

// Delete tree
BST::~BST() {
    destroy_tree(root);
}

// If !root, return 0 as fail.
// Postorder traversal to hold open all calls
// and delete as they are collapsed.
int BST::destroy_tree(tNode *& current) {
    if (!current)
        return 0;
    int sum = destroy_tree(current->get_left()) +
              destroy_tree(current->get_right()) + 1;
    delete current;
    current = nullptr;
    return sum;
}

// Inorder display of the BST
int BST::inorder() const {
    if (root == nullptr)
        return 0;
    return inorder(root);
}

int BST::inorder(tNode *current) const {
    if (current == nullptr)
        return 0;
    int i = inorder(current->get_left()) +1;
    current->display();
    return inorder(current->get_right()) +i;
}

// Takes an int as an argument and finds it in the BST
tNode * BST::find(int to_find) {
    return find(root, to_find);
}

tNode * BST::find(tNode * current, int to_find) {
    if (current == nullptr)
        return current;
    if (*current == to_find)
        return current;
    if (*current < to_find)
        return find(current->get_right(), to_find);
    else
        return find(current->get_left(), to_find);
}

