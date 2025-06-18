class Solution {
public:
    void find_subsets(int ind,vector<int>arr, vector<int>&seq, vector<vector<int>>&ans){
        ans.push_back(seq);

        for(int i=ind;i<arr.size();i++){
            seq.push_back(arr[i]);
            find_subsets(i+1,arr,seq,ans);
            seq.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> seq;
        find_subsets(0,nums,seq,ans);
        return ans;
    }
};