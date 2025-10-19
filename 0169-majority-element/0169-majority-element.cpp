class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i:nums){
            mpp[i]++;
        }
        for(auto i:mpp){
            if(i.second>nums.size()/2)
                return i.first;
        }
        return 0;
    }
};