class Solution {
public:

    void findCombination(int i, int target, vector<int> &arr, vector<int>&seq, vector<vector<int>> &ans){
        if(i==arr.size()){
            if(target== 0){
                ans.push_back(seq);
            }
            return;
        }
        if(arr[i]<=target){
            seq.push_back(arr[i]);
            findCombination(i,target-arr[i],arr,seq,ans);
            seq.pop_back();
        }
        findCombination(i+1,target,arr,seq,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> seq;
        findCombination(0,target,candidates,seq,ans);
        return ans;
    }
};