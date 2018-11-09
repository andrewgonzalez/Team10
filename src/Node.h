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

    void set_height( int h );
    int get_height() const;
    int get_left_height() const;
    int get_right_height() const;

    Node *& get_left();
    Node *& get_right();

    bool set_left(Node & to_add);
    bool set_right(Node & to_add);
    bool compare(int data_in);

private:

    int data;
    int height;
    Node * left;
    Node * right;

};

#endif
