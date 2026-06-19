class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> pair;
        for(int i=0;i<nums.size();i++){
            int rem = target-nums[i];
            if(pair.find(rem)!=pair.end() && pair[rem]!=i){
                return {i,pair[rem]};
            }
            pair[nums[i]]=i;
        }
        return {};
    }
};