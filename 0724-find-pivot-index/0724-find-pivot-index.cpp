class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rsum = std::accumulate(nums.begin(),nums.end(),0);
        int lsum=0;
        for(int i=0;i<nums.size();i++){
            if(rsum-nums[i] == lsum)
                return i;
            rsum-=nums[i];
            lsum+=nums[i];
        }
        return -1;
    }
};