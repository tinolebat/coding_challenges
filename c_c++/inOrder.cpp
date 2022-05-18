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
            std::cout << root->data << " ";

            inOrder(root->right);
            return v;
        }
};

int main()
{
    Solution s;
    Treenode * root = new Treenode(1);
    root->left = new Treenode(3);
    root->right = new Treenode(2);

    vector<int> res = s.inOrder(root);

    std::cout << " \nPrint result vector \n";
    for(int i=0; i< res.size(); i++)
    {
        std::cout << res.at(i) << " ";
    }
    std::cout << "\n";


    return 0;
}