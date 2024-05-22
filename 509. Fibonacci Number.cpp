//Bottom Up Approach
class Solution {
public:
    int fib(int n) {
        vector<int> dp(n+1);
        if(n==0) return 0;
        else if(n==1) return 1;
        dp[0]=0; dp[1]=1;
        for(int i=2; i<=n; i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
        
    }
};

//Top Down Approach
class Solution {
public:
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return func(n, dp);
    }
private:
    int func(int n, vector<int>&dp){        
        if(n==0 || n==1){
            return n;
        }
        if(dp[n]!=-1) return dp[n];
        else{
            dp[n]= func(n-1, dp)+ func(n-2, dp);
            return dp[n];
        }
    }
};

//Space Optimization
class Solution {
public:
    int fib(int n) {
       if(n<=1) return n;
       int prev1=1;
       int prev2=0;
       int curr=0;
       for (int i=2; i<=n; i++){
        curr= prev1+prev2;
        prev2=prev1;
        prev1=curr;
       }
       return prev1;
    }
};
