class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        double ans = log2(n);
        double frac = ans - (int)ans;
        if(!frac)
            return true;
        return false;
    }
};