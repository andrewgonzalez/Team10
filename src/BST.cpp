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
    cout <<"Sorted order display:\n";
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
bool BST::find(int to_find) const {
    return find(root, to_find);
}

bool BST::find(tNode * current, int to_find) const {
    if (current == nullptr)
        return false;
    if (*current == to_find)
        return true;
    if (*current < to_find)
        return find(current->get_right(), to_find);
    else
        return find(current->get_left(), to_find);
}

//TODO: rewrite so there is no compiler warning about "reaching end of non-void function"
// This is not a balancing add function
int BST::add(tNode *&current, int data_in) {
    // When we've reached the insert position, create
    // a new node.
    if (!current) {
        current = new tNode(data_in);
        return 1;
    }
    // If what's inside the node in the tree is greater or
    // equal to the data we want to add, go left.
    // Else, go right.
    if (current->compare(data_in))
        return add(current->get_left(), data_in);
    else
        return add(current->get_right(), data_in);
}

