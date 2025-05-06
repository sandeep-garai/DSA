class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy = prices[0];
        int maxProfit = 0;
        for(int i=0;i<prices.size();i++){
            if(bestBuy > prices[i])
                bestBuy = prices[i];
            else if(maxProfit < prices[i]-bestBuy)
                maxProfit = prices[i]-bestBuy;
        }
        // for(int i=1;i<prices.size();i++){
        //     if(bestBuy < prices[i]){
        //         maxProfit = max (maxProfit, prices[i]-bestBuy);
        //     }
        //     bestBuy = min (bestBuy, prices[i]);
        // }
        return maxProfit;
    }
};