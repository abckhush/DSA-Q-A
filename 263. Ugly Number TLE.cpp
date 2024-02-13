//TIME LIMIT EXCEEDS


class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        for(int i=2; i<=n; i++){
            if(n%i==0){
                if(i==2 || i==3 || i==5){
                    n/=i;
                    i=1;
                }
                else return false;
            }
            else continue;
        }
        return true;
    }
};
