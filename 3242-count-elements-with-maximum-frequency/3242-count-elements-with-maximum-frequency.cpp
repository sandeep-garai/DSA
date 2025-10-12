class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int max=0,count=0;
        map<int,int>mpp;
        for(int num : nums){
            mpp[num]++;
        }
        for(auto it:mpp){
            if(max<it.second){
                max=it.second;
            }
        }
        for(auto it:mpp){
            if(it.second==max)  count=count+max;
        }
        return count;
    }
};