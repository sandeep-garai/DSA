class Solution {
public:
    int findComplement(int num) {
        int i=0;
        for(i=0;i<num;i++){
            if(pow(2,i)>num)
                break;
        }
        return pow(2,i)-1-num;
    }
};