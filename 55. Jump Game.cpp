class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n= nums.size();
        int a=0;
        for(int i=0; i<n; i++){
            if(i>a) return false;
            a=max(a, i+nums[i]);
        }
        return a>=n-1;
    }
};
