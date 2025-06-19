class Solution {
public:
    void permutations(vector<int>&arr, vector<int>&seq, vector<vector<int>>&ans, vector<bool>&freq){
        if(seq.size()==arr.size()){
            ans.push_back(seq);
            return;
        }
        for(int i=0;i<arr.size();i++){
            if(!freq[i]){
                seq.push_back(arr[i]);
                freq[i]=true;
                permutations(arr,seq,ans,freq);
                seq.pop_back();
                freq[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> seq;
        vector<bool> freq(nums.size(),false);
        permutations(nums,seq,ans,freq);
        return ans;
    }
};