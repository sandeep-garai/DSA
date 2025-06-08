class Solution {
public:
    //memoization technique
    int climb(int n,unordered_map<int,int>&memo){
        if(n==0 || n==1)   
            return 1;
        if(memo.find(n)==memo.end()){
            memo[n] = climb(n-1,memo) + climb(n-2,memo);
        }
        return memo[n];
    }
    
    int climbStairs(int n) {
        unordered_map<int,int> memo;
        return climb(n,memo);
    }
};