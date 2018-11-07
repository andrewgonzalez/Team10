//
// Created by Miguel on 11/5/2018.
//

#ifndef BST_H
#define BST_H

#include <iostream>

class Node
{
public:
    Node();
    ~Node();
    int add(int data_in);
    int display();
private:
    int data;
    Node * left;
    Node * right;

};

class BST
{
public:
    BST();
    ~BST();
    int add(int data);
private:
    Node * root;
};

#endif BST_H
