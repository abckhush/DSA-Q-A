//Bottom Up Approach

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
     int ans= func(coins, amount);
     return ans!=INT_MAX?ans:-1;
    }
private:
    int func(vector<int>&coins, int amount){
     vector<int>dp(amount+1, INT_MAX);   
     dp[0]=0;
     for(int i=1; i<amount+1; i++){
        for(int c=0; c<coins.size(); c++)
        if(i-coins[c]>=0 && dp[i-coins[c]]<INT_MAX) dp[i]= min(dp[i], 1+dp[i-coins[c]]);
     }
     for(int i=0; i<=amount; i++){
        cout<<dp[i]<<" ";
     }
     cout<<endl;
    return dp[amount];
    }
};
