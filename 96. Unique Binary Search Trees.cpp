// Time Comlexity: O(n^2)
class Solution {
public:
    int numTrees(int n) {
        vector<int>dp(n+1, 0);
        dp[0]=1;
        dp[1]=1;
        for(int i=2; i<=n; i++){
            for(int j=1; j<=i; j++){
                dp[i]= dp[i]+ dp[i-j]*dp[j-1];
            }
        }
        return dp[n];
    }
};

//Time Complexity: O(2^n)
class Solution {
public:
    int numTrees(int n) {
        if (n==0 || n==1) return 1;
        int count=0;
        for (int i=1; i<=n; i++) {
            count += numTrees(i-1) * numTrees(n-i);
        }
        return count;
    }
};
