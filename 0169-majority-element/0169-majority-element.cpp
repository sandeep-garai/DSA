class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int len=nums.size();
        for(int i:nums){
            mp[i]++;
            if(mp[i]>len/2)
                return i;
        }
        return 0;
    }
};