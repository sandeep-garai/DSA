class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int len=nums.size();
        int val=nums[0],count=0;;
        for(int i=0;i<len;i++){
            if(val==nums[i]){
                count++;
            }
            else{
                count=1;
            }
            val=nums[i];
            if(count>len/2)
                return val;
        }
        return 0;
    }
};