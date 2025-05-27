class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxavg=INT_MIN;
        int maxm = 0;
        for(int i=0;i<size(nums);i++){
            maxm += nums[i];
            if(i>=k-1){
                double avg = maxm / (double)k;
                maxavg = max(maxavg,avg);
                cout<<maxm<<" "<<endl;
                maxm -= nums[i-k+1];
            }
        }
        return maxavg;
    }
};