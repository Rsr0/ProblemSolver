class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX, sell=0;
        int prev_buy, prev_sell=0;
        
        for(int i=0;i<prices.size();i++){
            prev_buy=buy;
            buy=min(buy, prices[i]-prev_sell);
            prev_sell=sell;
            sell=max(sell, prices[i]-prev_buy);
        }
        return sell;
    }
};