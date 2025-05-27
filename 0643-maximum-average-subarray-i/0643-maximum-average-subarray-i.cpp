class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxm =0.0;
        double sm=0.0;
        for(int i=0;i<k;i++){
            maxm+=nums[i];
        }
        sm=maxm;
        for(int i=k ;i<size(nums);i++){
            sm=sm+nums[i]-nums[i-k];
            maxm=max(maxm,sm);
        }
        return maxm/(double)k;
    }
};