//Dynamic Programming : Top Down Approach
class Solution {
public:
    int climbStairs(int n){
        vector<int>dp(n+1, -1);
        return func(n, dp);
    }
private:
    int func(int n, vector<int>& dp){
        if(n==1) return 1;
        if(n==2) return 2;
        if(dp[n]!=-1) return dp[n];
        else{
            dp[n]= func(n-1, dp) + func(n-2, dp);
            return dp[n];
        }
    }
};



//RECURSION: Exceeds TLE
class Solution {
public:
    int climbStairs(int n) {
        if (n==1) return 1;
        if(n==2) return 2;
        else return climbStairs(n-1)+climbStairs(n-2);
    }
};
