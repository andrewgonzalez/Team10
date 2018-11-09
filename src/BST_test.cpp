//
// Created by thisSpectre on 11/5/2018.
//

#include "BST.h"
#include <iostream>

using namespace std;

int main() {
    BST bst;
    bst.add(5);
    bst.add(4);
    bst.add(7);
    bst.add(9);
    bst.add(2);
    bst.add(4);
    bst.add(3);
    bst.inorder();


    return 1;
}
