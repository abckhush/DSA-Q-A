class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        unordered_map<int,int>map;
        for(int num: nums){
            count+=map[num];
            map[num]++;
        }
        return count;
    }
};
