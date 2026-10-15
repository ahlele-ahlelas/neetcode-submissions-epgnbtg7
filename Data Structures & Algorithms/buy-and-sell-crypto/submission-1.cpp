class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int buy = prices[0];
        for(int i=0;i<prices.size();++i){
            buy = min(buy,prices[i]);
            int sell = prices[i];
            max_profit = max(max_profit,sell-buy);
        }
        return max_profit;
    }
};
