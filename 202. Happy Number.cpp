class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
        if(n==1) return true;
        while(true){
            while(n>0){
                sum += (n%10)*(n%10);
                n/=10;
            } 
            if(sum==1) return true;
            if(sum==4) return false;
            n=sum;
            sum=0;
        }
        return false;
    }
};
