class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxVal = 0;
        for(auto& m:accounts){
            int maxm = 0;
            for(auto& n:m){
                maxm += n;
            }
            maxVal = max(maxm, maxVal);
        }
        return maxVal;
    }
};