//
// Created by Andrew Gonzalez on 11/5/18.
// Node class header file. Base class for the Person hierarchy.
//

#ifndef NODE_H
#define NODE_H

class Node {

public:

    Node();
    Node(int data);

    void display();

    void set_height( int h );
    int get_height();
    int get_left_height();
    int get_right_height();

    Node *& get_left();
    Node *& get_right();

    bool set_left(Node & to_add);
    bool set_right(Node & to_add);
    bool compare(int i);

private:

    int data;
    int height;
    Node * left;
    Node * right;

};

#endif NODE_H
