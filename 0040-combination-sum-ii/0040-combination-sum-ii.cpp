class Solution {
public:
    void findCombination(int ind, int target, vector<int>&arr, vector<int> &seq, vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(seq);
            return;
        }
        for(int i = ind;i<arr.size();i++){
            if(i>ind && arr[i]==arr[i-1])   continue;
            if(arr[i]>target)   break;
            seq.push_back(arr[i]);
            findCombination(i+1,target-arr[i],arr,seq,ans);
            seq.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>seq;
        vector<vector<int>> ans;
        findCombination(0, target, candidates, seq, ans);
        return ans;
    }
};