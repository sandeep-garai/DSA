class Solution {
public:
    int differenceOfSums(int n, int m) {
        int val = 0;
        while(n>0){
            if(n%m==0)
                val-=n;
            else
                val+=n;
            n--;
        }
        return val;
    }
};