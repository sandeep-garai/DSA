class Solution {
public:
//tabulation 
    int climbStairs(int n) {
        if(n==0 || n==1)    return 1;

        int prev =1 , curr =1;
        for(int i=2;i<=n;i++){
            curr = curr + prev;
            prev = curr - prev;
            //curr = curr - prev;
        }
        return curr;
    }
};