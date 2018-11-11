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

// Wrapper to call recursive display
void Balanced_Tree::display_tree() {
    if (root == nullptr)
        return;
    display_tree(root, 0);
}

// Recursive function to display Balanced_Tree like an
// actual tree. Greatest value is at the left.
void Balanced_Tree::display_tree(Node * current, int indent) {
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

void Balanced_Tree::insert(int num) {

}

// Used to compare balance of particular node
int Balanced_Tree::max(int a, int b) {
    return a > b ? a : b;
}
