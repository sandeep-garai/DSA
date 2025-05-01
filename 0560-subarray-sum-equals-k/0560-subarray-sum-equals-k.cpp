class Solution {
public:
    //O(n^2) solution
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        int len=nums.size();
        for(int i=0;i<len;i++){
            int sum=0;
            for(int j=i;j<len;j++){
                sum+=nums[j];
                if(sum==k){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};