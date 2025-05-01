class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> preSum;
        for(int i=0;i<nums.size();i++){
            int cmp=target-nums[i];
            if(preSum.find(cmp)!=preSum.end()){
                return {preSum[cmp],i};
            }
            preSum[nums[i]]=i;
        }
        return{};
    }
};