//Time Complexity: O(nlogn)
//Space Complexity: O(1)

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
private:
    vector <int> InorderTraversal(TreeNode* root, vector<int>&nums){
        if(root->left != NULL) InorderTraversal(root->left, nums);
        nums.push_back(root->val);
        if(root->right != NULL) InorderTraversal(root->right, nums);
        return nums;
    }
public:
    bool isValidBST(TreeNode* root) {
        if(root->left==NULL && root->right==NULL) return true;
        vector <int> nums(0);
        InorderTraversal(root, nums);
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>=nums[i+1]){
                return false;
            }
        }
        return true;
    }
};
