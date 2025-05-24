class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int len = size(nums);
        vector<int> leftSum(len);
        vector<int> rightSum(len);
        leftSum[0]=nums[0];
        rightSum[len-1]=nums[len-1];
        for(int i=1; i<len;i++){
            leftSum[i]=leftSum[i-1]+nums[i];
            rightSum[len-1-i] = rightSum[len-i] + nums[len-1-i];
        }
        for(int i=0;i<len;i++){
            if(leftSum[i]==rightSum[i])
                return i;
        }
        return -1;
    }
};