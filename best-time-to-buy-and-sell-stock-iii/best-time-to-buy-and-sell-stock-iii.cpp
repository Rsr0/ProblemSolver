class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2) return 0;
        
    int buy1 = INT_MAX, buy2 = INT_MAX;
    int sell1 = 0, sell2 = 0;
    for (int price : prices) {
          // the maximum profit if only one transaction is allowed
          buy1 = min(buy1, price);
          sell1 = max(sell1, price - buy1);
          // re-invest the gained profit in the second transaction
          buy2 = min(buy2, price - sell1);
          sell2 = max(sell2, price - buy2);
      }
      return sell2;
    }
};