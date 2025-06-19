class Solution {
public:
    void subset(int ind, vector<int>&arr, vector<int>&seq, vector<vector<int>>&ans){
        ans.push_back(seq);
        for(int i=ind;i<arr.size();i++){
            if(i!=ind && arr[i]==arr[i-1])  continue;
            seq.push_back(arr[i]);
            subset(i+1,arr,seq,ans);
            seq.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> seq;
        sort(nums.begin(),nums.end());
        subset(0,nums,seq,ans);
        return ans;
    }
};