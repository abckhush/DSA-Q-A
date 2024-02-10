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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*>tree;
        tree.push(root);
        while(!tree.empty()){
            int n= tree.size();
            vector<int>levels;
            for(int i=0; i<n; i++){
                TreeNode* node= tree.front();
                tree.pop();
                levels.push_back(node->val);
                if(node->left) tree.push(node->left);
                if(node->right) tree.push(node->right);
            }
            ans.push_back(levels);
        }
        return ans;
    }
};
