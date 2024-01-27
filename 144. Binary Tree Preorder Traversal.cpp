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
    void traversal(TreeNode* root, vector<int>&preOrder){
        if(root==NULL) return;
        preOrder.push_back(root->val);
        traversal(root->left, preOrder);
        traversal(root->right, preOrder);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>preOrder;
        traversal(root, preOrder);
        return preOrder;
    }
};
