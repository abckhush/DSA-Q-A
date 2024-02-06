class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int fIndex= firstIndex(nums, target);
        int lIndex= lastIndex(nums,target);
        return{fIndex, lIndex};
    }
private:
        int firstIndex(vector<int>&nums, int target){
            int left=0;
            int right= nums.size()-1;
            int fIndex=-1;
            while(left<=right){
                int mid= left+ (right-left)/2;
                if(nums[mid]==target){
                    fIndex=mid;
                    right=mid-1;
                }
                else if(target>nums[mid]) left=mid+1;
                else right= mid-1;
            }
            return fIndex;
        }

        int lastIndex(vector<int>& nums, int target){
            int left=0;
            int right= nums.size()-1;
            int lIndex=-1;
            while(left<=right){
                int mid= left+ (right-left)/2;
                if(nums[mid]==target){
                    lIndex=mid;
                    left=mid+1;
                }
                else if(target>nums[mid]) left=mid+1;
                else right= mid-1;
            }
            return lIndex;
        }
};
