#include <iostream>

using namespace std;

typedef class node
{
    public:
        int data;
        node * left;
        node * right;

        node(int val)
        {
            data = val;
            left = NULL;
            right = NULL;
        }
}treeNode;

int main()
{
    treeNode * root = new treeNode(1); // root
    root->left = new treeNode(2);
    root->right = new treeNode(3);

    root->left->left = new treeNode(4);

    return 0;
}