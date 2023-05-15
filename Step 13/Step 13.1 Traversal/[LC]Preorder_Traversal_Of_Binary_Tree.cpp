// URL : https://leetcode.com/problems/binary-tree-preorder-traversal/

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
class Solution {
public:
    void psin(vector<int>&temp,TreeNode* root)
    {
        if(root)
        {
            temp.push_back(root->val);
            psin(temp,root->left);
            psin(temp,root->right);
        }
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>temp;
        psin(temp,root);
        return temp;
    }
};
