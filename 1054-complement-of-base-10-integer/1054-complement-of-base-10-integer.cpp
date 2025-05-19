class Solution {
public:
//resubmit
    int bitwiseComplement(int n) {
        if(n==0)    return 1;
        unsigned int mask = 0;
        unsigned int num = n;
        while(num){
            mask = (mask << 1) | 1;
            num >>= 1;
        }
        return mask ^ n;
    }
};