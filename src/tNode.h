//
// Created by Andrew Gonzalez on 11/5/18.
// tNode class header file. Base class for the Person hierarchy.
//

#ifndef TNODE_H
#define TNODE_H

#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;


class tNode {

public:

    tNode();
    tNode(int data);
    //explicit tNode(int data);
    tNode(const tNode & copyFrom);
    virtual ~tNode();

    virtual void display() const = 0;

    virtual void edit_state(string&) = 0;

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
    bool operator < (int) const;
    bool operator > (int) const;
    bool operator <= (int) const;
    bool operator == (int) const;

private:

    int data;
    int height;
    tNode * left;
    tNode * right;

};

#endif
