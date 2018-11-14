//
// Created by thisSpectre on 11/5/2018.
//

#include "Balanced_Tree.h"
#include <iostream>

using namespace std;

int main() {
    Balanced_Tree bst;
    bst.insert(1);
    bst.insert(2);
    bst.inorder();
    bst.insert(3);
    bst.inorder();



    return 1;
}
