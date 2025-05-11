class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int cnt=0;
        int len=tickets.size();
        for(int i=0;i<len;i++){
            if(tickets[i]>=tickets[k]){
                if(i<=k)
                    cnt=cnt+tickets[k];
                else
                    cnt=cnt+tickets[k]-1;
            }
            else
                cnt=cnt+tickets[i];
        }
        return cnt;
        // for(int i=0;i<len;i=i%(len-1)){
        //     if(tickets[i]>0){
        //         tickets[i]--;
        //         cnt++;
        //     }
        //     if(tickets[k]==0)
        //         return cnt;
        // }
    }
};