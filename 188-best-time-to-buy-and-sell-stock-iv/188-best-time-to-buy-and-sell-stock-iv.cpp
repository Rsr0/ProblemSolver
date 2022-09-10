class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        
        if(k==0 || n==0 || n==1) return 0;
        
        // int ans=0;
//         if(k>=n/2){   // max number of transactions possible
//             for(int i=1;i<n;i++){
//                 if(prices[i] > prices[i-1])
//                     ans+=prices[i]-prices[i-1];
//             }
//             return ans;
//         }
        
        vector<int> buy(k+1, INT_MAX);
        vector<int> sell(k+1, 0);
        
        for(int i=0;i<n;i++){
            
            for(int j=1;j<=k;j++){
                buy[j]=min(buy[j], prices[i]-sell[j-1]);
                sell[j]=max(sell[j], prices[i]-buy[j]);
            }
        }
        return sell[k];
    }
};