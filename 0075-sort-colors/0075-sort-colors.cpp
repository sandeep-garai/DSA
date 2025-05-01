class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> mp;
        for(int n:nums){
            mp[n]++;
        }
        int k=0,i=0;
        while(i<mp[0]){
            nums[k++]=0;
            i++;
        }
        i=0;
        while(i<mp[1]){
            nums[k++]=1;
            i++;
        }
        i=0;
        while(i<mp[2]){
            nums[k++]=2;
            i++;
        }
    }
};