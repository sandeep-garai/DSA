class Solution {
public:
    //O(n^2) solution
    int subarraySum(vector<int>& nums, int k) {
        int preSum=0,ans=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            preSum+=nums[i];
            int remove=preSum-k;
            ans+=mp[remove];
            mp[preSum]++;
        }
        return ans;
    }
};