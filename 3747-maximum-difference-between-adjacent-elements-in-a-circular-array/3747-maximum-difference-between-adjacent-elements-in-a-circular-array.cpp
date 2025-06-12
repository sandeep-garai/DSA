class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int len=nums.size();
        int maxm=abs(nums[len-1]-nums[0]);
        for(int i=0;i<len-1;i++){
            maxm= max(maxm,abs(nums[i]-nums[i+1]));
        }
        return maxm;
    }
};