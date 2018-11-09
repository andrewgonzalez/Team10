//
// Created by Carlos Miguel Sayao on 07-Nov-18.
//

#include "Balanced_Tree.h"

using namespace std;

Balanced_Tree::Balanced_Tree() {
    this->root = nullptr;
    this->balance = 0;
}

Balanced_Tree::~Balanced_Tree() {

}

void Balanced_Tree::insert( int num ) {

}

// Used to compare balance of particular node
int Balanced_Tree::max(int a, int b) {

    if ( a > b )
        return a;
    else
        return b;

}