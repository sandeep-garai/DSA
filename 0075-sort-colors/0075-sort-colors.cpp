class Solution {
public:
    void sortColors(vector<int>& nums) {
        int array[3] = {0};
        for(int i =0;i<nums.size();i++){
            array[nums[i]]++;
        }
        nums.clear();
        for(int i =0;i<3;i++){
            for(int j =0;j<array[i];j++){
                nums.push_back(i);
            }
        }
    }
};