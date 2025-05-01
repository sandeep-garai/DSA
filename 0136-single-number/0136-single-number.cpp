class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp(nums.size());
        for(int n:nums){
            mp[n]++;
        }
        for(pair<int,int>n:mp){
            if(n.second!=2){
                return n.first;
            }
        }
        return 0;
    }
};