class Solution {
public:
    int mySqrt(int x) {
        float y= exp(log(x)/2);
        int z= static_cast<int>(y);
        if(z*z>x) z-=1;
        return z;
    }
};
