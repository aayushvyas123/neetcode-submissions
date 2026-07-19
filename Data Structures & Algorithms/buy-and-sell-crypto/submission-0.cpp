class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int maxProfit = 0;
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < prices[buy]){
                buy = i;
            }else{
                int profit = prices[i] - prices[buy];

                maxProfit =  max(profit, maxProfit);
            }
        }
        return maxProfit;
    }
};
