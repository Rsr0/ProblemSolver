class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int minp=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<minp)
                minp=prices[i];
            else if(prices[i]-minp > res)
                res=prices[i]-minp;
        }
        return res;
    }
};