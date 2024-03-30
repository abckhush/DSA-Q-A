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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue <TreeNode*> q;
        q.push(root);
        vector<long long>nums;
        while(!q.empty()){
            int n= q.size();
            long long sum=0;
            for (int i=0; i<n; i++) {
                TreeNode* node=q.front();
                q.pop();
                sum += node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            nums.push_back(sum);
        }
        sort(nums.begin(), nums.end());
        if(k>nums.size()) return -1;
        return nums[nums.size()-k];
    }
};
