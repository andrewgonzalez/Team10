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
    //destroy_tree(root);
}

// If !root, return 0 as fail.
// Postorder traversal to hold open all calls
// and delete as they are collapsed.
int BST::destroy_tree(Node *& current) {
    if (!current)
        return 0;
    int sum = destroy_tree(current->go_left()) +
              destroy_tree(current->go_right()) + 1;
    delete current;
    current = nullptr;
    return sum;
}

void BST::inorder() {
    if (root == nullptr)
        return;
    root->display();
    inorder(root);
}

void BST::inorder(Node *current) {
    if (current == nullptr)
        return;
    inorder(current->get_left());
    current->display();
    inorder(current->get_right());
}

int BST::add(int data_in) {
    if (!root) {
        root = new Node(data_in);
        return 1;
    }
    add(root, data_in);
}

int BST::add(Node *&current, int data_in) {
    // When we've reached the insert position, create
    // a new node.
    if (!current) {
        current = new Node(data_in);
        return 1;
    }
    // If what's inside the node in the tree is greater or
    // equal to the data we want to add, go left.
    // Else, go right.
    if (current->compare(data_in))
        return insert(current->go_left(), data_in);
    if (!current->compare(data_in))
        return insert(current->go_right(), data_in);
}
