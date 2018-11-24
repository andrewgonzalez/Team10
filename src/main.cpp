#include "Terminal.h"
#include "Balanced_Tree.h"
#include "Person.h"

using namespace std;

int main()
{
    string p11;
    p11 = "Carlos Miguel Sayao";
    string p12;
    p12 = "11020 NE Marx St";
    string p13;
    p13 = "Portland";
    string p14;
    p14 = "OR";
    Person p1 = Person(932082330, 97220, p11, p12, p13, p14);

    tNode *node;
    //Person p1 = Person(932082330, 97220, "Carlos", "Marx St", "Portland", "OR");
    node = &p1;
    node->display();

    BST bst;



    return 1;
}

