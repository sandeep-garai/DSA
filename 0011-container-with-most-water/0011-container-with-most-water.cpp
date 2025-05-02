class Solution {
public:
    int maxArea(vector<int>& height) {
        int len=height.size();
        int maxArea=0;
        int left=0;
        int right=len-1;
        while(left<right){
            int small = min(height[left],height[right]);
            int vol=small*(right-left);
            maxArea = max(maxArea, vol);
            if(height[left]<height[right])  left++;
            else        right--;
        }
        return maxArea;
    }
};