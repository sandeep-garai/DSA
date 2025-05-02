class Solution {
public:
    int smallestNumber(int n) {
        vector<int> bin;
        if(n==1) return 1;
        int ans=0;
        while(n>0){
            bin.push_back(n%2);
            n=n/2;
        }
        for(int i:bin)
            ans=ans*2+1;

        return ans;
    }
};