#include <iostream>
#include <vector>

using namespace std;

typedef struct Node
{
    int data;
    Node * left;
    Node * right;

    Node(int val)
    {
        data =val;
        left =right = NULL;
    }

}Treenode;

class Solution
{
    public:
        vector<int> v;
        vector<int> inOrder(Treenode *root)
        {
            if(root == NULL) return v;
        
            inOrder(root->left);
            v.push_back(root->data);
            // std::cout << root->data << " ";

            inOrder(root->right);
            return v;
        }

        void display(vector<int> vc)
        {
            for(int i=0; i<vc.size(); i++)
            {
                std::cout << vc.at(i) << " ";
            }
            std::cout << "\n";
        }
};

int main()
{
    Treenode * root = new Treenode(1);
    root->left = new Treenode(2);
    root->right = new Treenode(3);

    root->left->left = new Treenode(4);
    root->left->right= new Treenode(5);

    root->right->left= new Treenode(6);
    root->right->right= new Treenode(7);

    Solution s;
    vector<int> res = s.inOrder(root);

    std::cout << "\nPrint result vector \n";
    s.display(res);

    return 0;
}