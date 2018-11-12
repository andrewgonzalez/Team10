//
// Created by Andrew Gonzalez on 11/5/18.
// Node class header file. Base class for the Person hierarchy.
//

#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

class Node {

public:

    Node();
    Node(int data);
    ~Node();

    void display() const;

    void set_height(int h);
    int get_height();
    int get_left_height();
    int get_right_height();
    int get_balance();

    void set_left(Node * to_add);
    void set_right(Node * to_add);

    Node *& get_left();
    Node *& get_right();

    // Rotations
    Node *& rotate_left();
    //Node *& rotate();
    Node *& rotate_right();


    bool compare(int data_in);
    int get_int();

private:

    int data;
    int height;
    Node * left;
    Node * right;

};

#endif
