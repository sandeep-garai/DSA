class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans = nums1;
        for(int n: nums2){
            ans.pop_back();
        }
        for(int n : nums2){
            ans.push_back(n);
        }
        sort(ans.begin(),ans.end());
        
        nums1=ans;
    }
};