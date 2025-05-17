class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)    return 1;
        if(n==1)    return 0;
        for(int i=0;i<n+1;i++){
            if(pow(2,i)>n)
                return pow(2,i)-1-n;
        }
        return -1;
    }
};