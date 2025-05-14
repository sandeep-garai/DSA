class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int len = nums.size();
        int pos_value=nums[len-1]*nums[len-2]*nums[len-3];
        int neg_value=nums[0]*nums[1];
        return max(neg_value*nums[len-1],pos_value);
    }
};