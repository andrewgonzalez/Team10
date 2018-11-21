//
// Created by Andrew Gonzalez on 11/5/18.
// tNode class header file. Base class for the Person hierarchy.
//

#ifndef TNODE_H
#define TNODE_H

#include <iostream>
#include <cstring>

using namespace std;


class tNode {

public:

    tNode();
    explicit tNode(int data);
    tNode(const tNode & copyFrom);
    virtual ~tNode() = default;

    void display() const;

    void set_height(int h);
    int get_height();
    int get_left_height();
    int get_right_height();
    int get_balance();

    void set_left(tNode * to_add);
    void set_right(tNode * to_add);

    tNode *& get_left();
    tNode *& get_right();

    // Rotations
    tNode * rotate_left(tNode *& current);
    tNode * rotate_right(tNode *& current);
    tNode * lr_rotate(tNode *&);
    tNode * rl_rotate(tNode *&);

    // Comparison functions
    bool compare(int data_in);
    tNode& operator = (const tNode&);
    bool operator < (const tNode&) const;
    bool operator > (const tNode&) const;
    bool operator <= (const tNode&) const;
    bool operator == (const tNode&) const;
    bool operator < (int) const;
    bool operator > (int) const;
    bool operator <= (int) const;
    bool operator == (int) const;
    int get_int();

private:

    int data;
    int height;
    tNode * left;
    tNode * right;

};

#endif
