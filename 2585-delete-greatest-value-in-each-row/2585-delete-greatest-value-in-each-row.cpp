class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        
        // Sort each row in descending order
        for (int i = 0; i < m; i++) {
            sort(grid[i].rbegin(), grid[i].rend());
        }
        
        for (int j = 0; j < n; j++) {
            int maxVal = 0;
            for (int i = 0; i < m; i++) {
                maxVal = max(maxVal, grid[i][j]);
            }
            ans += maxVal;
        }
        
        return ans;
    }
};
