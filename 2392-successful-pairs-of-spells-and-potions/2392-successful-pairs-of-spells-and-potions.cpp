class Solution {
public:
    // O(n2) solution
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        std::sort(potions.begin(),potions.end());
        for(auto s: spells){
            long long target = (success + s - 1) / s;
            auto it = lower_bound(potions.begin(),potions.end(),target);
            ans.push_back(potions.end()-it);
        }
        return ans;
    }
};