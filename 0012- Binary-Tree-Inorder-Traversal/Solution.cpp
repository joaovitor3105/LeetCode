/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
#include <vector>
using namespace std;
class Solution
{

public:
    vector<int> resultado;
    void inorder(TreeNode *root)
    {
        if (!root)
            return;
        inorder(root->left);
        resultado.push_back(root->val);
        inorder(root->right);
    }

    vector<int> inorderTraversal(TreeNode *root)
    {
        resultado.clear();
        inorder(root);
        return resultado;
    }
};