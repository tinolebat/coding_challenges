#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
}Treenode;

class Solution
{
    public:
        void inOrder(Treenode * root)
        {
            stack<Treenode *> s;
            Treenode * cur = root;

            while(cur != NULL || s.empty() == false)
            {
                // Reach the left most Treenode of the cur Node
                while(cur != NULL)
                {
                    std::cout <<"inside loop: "<< cur->data <<" \n" <<std::flush;
                    s.push(cur);
                    cur = cur->left;
                    
                }
                std::cout <<std::flush;
                // std::cout <<"Outside loop: "<< cur->data<<" \n" << std::flush;

                // cur must be NULL at this point, because it reaches the leaf node
                cur = s.top();
                s.pop();
            

                std::cout << cur->data << " ";

                // left subtree is visited completely, now swith to the right subtree
                cur = cur->right;
            }
            std::cout << "\n";
        }

        void preOrder(Treenode * root) // root -> left -> right
        {
            stack<Treenode *> s;
            Treenode * cur = root;

            while (cur !=NULL || s.empty() == false)
            {
                std::cout << cur->data << " ";
                while (cur != NULL)
                {
                    s.push(cur);
                    cur = cur->left;                    
                }

                
            }
            
        }

};

int main()
{
    Solution s;
    Treenode * root = new Treenode(1);
    root->left = new Treenode(2);
    root->right = new Treenode(3);

    root->left->left = new Treenode(4);
    root->left->right = new Treenode(5);

    root->right->left = new Treenode(6);
    root->right->right = new Treenode(7);

    s.inOrder(root);


    return 0;
}