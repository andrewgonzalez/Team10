/*
 * This is a file mainly for testing. When using ifstream::open,
 * make sure to change the file path to the correct path on your
 * machine. ifstream::open is used in the build functions.
 */


#include "Balanced_Tree.h"
#include <fstream>              // for reading from file
#include <ios>                  // for eof()

using namespace std;

const int MAX = 100;
int build_memberBST(Balanced_Tree&);
int build_providerBST(Balanced_Tree&);
int build_managerBST(Balanced_Tree&);
void display_members(Balanced_Tree&);

int main()
{
    Balanced_Tree member_bst;
    build_memberBST(member_bst);
    display_members(member_bst);

    // Check to make sure we have found a match. If not,
    // to_edit will be a nullptr.

    int num;
    tNode *to_edit;
    do {

        cout <<"Please enter an ID number to find: ";
        // ID number of member we want to find and edit
        cin >>num;

        // BST::find(int) returns a tNode
        to_edit = member_bst.find(num);

        // Display our found tNode to make sure we have the right one
        cout <<"Searching for ID " <<num <<":" <<endl;

        if (!to_edit)
            cout <<num <<" was not found" <<endl;

    } while (!to_edit);
    to_edit->display();

    // What we want to edit the member's 'state' to
    string message = "State edited";

    // Perform the edit. tNode has a virtual edit_state function.
    // When it is called, the program searches the derived class
    // for the function.
    cout <<"Edit state to \"State edited\"" <<endl;
    to_edit->edit_state(message);

    // Display our edited member
    cout <<"Our edited state:" <<endl;
    to_edit->display();

    // Display our tree to ensure it is still intact
    cout <<"Making sure our tree is still intact:" <<endl;
    display_members(member_bst);

    // Remove a member
    cout <<"Enter member ID number to remove: ";
    cin >>num;
    tNode * to_remove = member_bst.find(num);
    to_remove->remove();

    // Check to see our person was removed
    member_bst.inorder();

    return 1;
}

// Function that takes a Balanced_Tree object and builds it.
// The file we open has a number of how many items are in the list.
// We read in this number to know how many times to loop.
// Upon each iteration, we read in data and use it to create a new
// Person. We then insert this Person into the tree.
//
// This function returns -1 on failure, and 1 on success.
int build_memberBST(Balanced_Tree & bst) {
    // MAKE SURE TO SET 'file_name' TO PATH OF "members.txt"!!!
    string file_name = "C:\\Users\\Carlos Miguel Sayao\\CLionProjects\\Team10\\src\\members.txt";
    ifstream fin;
    fin.open(file_name.c_str(), ios::in);
    if (!fin) {
        cout <<"FAILED TO OPEN \"" <<file_name <<"\"" <<endl;
        return -1;
    }

    int i, j;           // stopping conditions
    int id, zip;
    char name[MAX], address[MAX], city[MAX], state[MAX];

    fin >>j;
    fin.ignore(MAX, '\n');

    for (i = 0; i < j; ++i){
        fin >>id;
        fin.ignore(MAX, ';');

        fin >>zip;
        fin.ignore(MAX, ';');

        fin.get(name, MAX, ';');
        fin.ignore(MAX, ';');
        string n = name;

        fin.get(address, MAX, ';');
        fin.ignore(MAX, ';');
        string a = address;

        fin.get(city, MAX, ';');
        fin.ignore(MAX, ';');
        string c = city;

        fin.get(state, MAX, '\n');
        fin.ignore(MAX, '\n');
        string s = state;

        Person *member = new Member(id, zip, n, a, c, s);
        bst.insert(id, member);
    }
    fin.close();

    return 1;
}

int build_providerBST(Balanced_Tree&) {
}

int build_managerBST(Balanced_Tree&) {
}

// Display members. Takes a Balanced_Tree object. Calls BST::inorder()
// to display the tree in order of ID numebr. iomanip::setw()
// is used formatting. Formatting is as follows:
/*
 * Members
 * ID           Name        Address
 * -----------------------------------
 */
void display_members(Balanced_Tree & bst) {
    cout <<"Members" <<endl;
    cout <<left <<setw(13) <<"ID"
         <<setw(15) <<"Name"
         <<std::right <<setw(13) <<"Address"
         <<endl;
    cout <<setfill('-') <<setw(70) <<"-" <<setfill(' ') <<endl;
    bst.inorder();
}
