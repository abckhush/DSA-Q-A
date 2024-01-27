class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>map;
        for(char jewel: jewels){
            map[jewel]++;
        }
        int count=0;
        for(char stone: stones){
            if(map.find(stone)!=map.end()) count++;
            else continue;
        }
        return count;
    }
};
