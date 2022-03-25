class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size()/2;
        vector<int> refund;
        
        int res=0;
        for(auto it:costs){
            res+=it[0];  // cost of all for city A
            
            refund.push_back(it[1]-it[0]);  // -ve means more refund
        }
        
        sort(refund.begin(), refund.end());
        
        for(int i=0;i<n;i++)
            res+=refund[i]; // refund for n person
        
        return res;
    }
};