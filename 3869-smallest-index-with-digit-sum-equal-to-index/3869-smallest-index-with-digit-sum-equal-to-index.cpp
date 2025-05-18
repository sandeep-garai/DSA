class Solution {
public:
    int digSum(int num){
        int dig=0,ans=0;
        while(num>0){
            dig=num%10;
            num=num/10;
            ans+=dig;
        }
        return ans;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(i==digSum(nums[i]))
                return i;
        }
        return -1;
    }
};