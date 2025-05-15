class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int longestStreak = 0;
        for(auto n : st){
            if(st.find(n-1)==st.end()){
                int currNum = n;
                int count = 1 ;
                while(st.find(currNum+1)!=st.end()){
                    currNum ++;
                    count ++;
                }
                longestStreak = max(longestStreak , count);
            }
        }
        return longestStreak;
    }
};