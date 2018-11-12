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

// Wrapper to call recursive display
void BST::display_tree() {
    if (root == nullptr)
        return;
    display_tree(root, 0);
}

// Recursive function to display BST like an
// actual tree. Greatest value is at the left.
void BST::display_tree(Node * current, int indent) {
    // 'i' for 'for' loops
    int i;
    if (current != nullptr){
        if (current->get_right() != nullptr)
            display_tree(current->get_right(), indent + 1);
        if (indent > 0) {
            for (i = 0; i < indent; ++i)
                cout <<endl;
            cout <<" ";
        }
        if (current->get_right() != nullptr){
            cout <<" /";
            for (i = 0; i < indent; ++i) {
                cout << "\t";
            }
            cout <<" ";
        }
        cout <<current->get_int();
        if (current->get_left() != nullptr) {
            for (i = 0; i < indent; ++i) {
                cout <<"\t";
            }
            cout <<" ";
            cout <<" \\\n";
            display_tree(current->get_left(), indent + 1);
        }
    }
}

// If !root, return 0 as fail.
// Postorder traversal to hold open all calls
// and delete as they are collapsed.
int BST::destroy_tree(Node *& current) {
    if (!current)
        return 0;
    int sum = destroy_tree(current->get_left()) +
              destroy_tree(current->get_right()) + 1;
    delete current;
    current = nullptr;
    return sum;
}

void BST::inorder() const {
    if (root == nullptr)
        return;
    cout <<"Sorted order display:\n";
    inorder(root);
}

void BST::inorder(Node *current) const {
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
        return add(current->get_left(), data_in);
    if (!current->compare(data_in))
        return add(current->get_right(), data_in);
}
