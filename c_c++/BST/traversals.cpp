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
                    // std::cout <<"inside loop: "<< cur->data <<" \n" <<std::flush;
                    s.push(cur);
                    cur = cur->left;           
                }

                // cur must be NULL at this point, because it reaches the leaf node
                cur = s.top();
                s.pop();
            
                std::cout << cur->data << " ";

                // left subtree is visited completely, now swith to the right subtree
                cur = cur->right;
            }
            std::cout << "\n";
        }

        void preOrder(Treenode * root)
        {
            if(root == NULL) return;

            stack<Treenode* > s;
            s.push(root);
            Treenode * cur;

            while(s.empty()==false)
            {
                cur = s.top();
                std::cout << cur->data << " ";
                s.pop();

                // Push right and left children of the popped node to stack
                if(cur->right) s.push(cur->right);

                if(cur->left) s.push(cur->left);                
            }
            std::cout << "\n";
        }

        void postOrder(Treenode * root)
        {
            if(root == NULL) return;

            stack<Treenode* > s;
            Treenode * cur;

            while(s.empty() == false)
            {
                s.push(root->right);
                s.push(root);

                cur = root->left;
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
    s.preOrder(root);


    return 0;
}