class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a=0;
        int n= nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                swap(nums[i], nums[a++]);
            }
        }
        for (int num: nums){
            cout<<num<<" ";
        }
        cout<<endl;
    }
};
