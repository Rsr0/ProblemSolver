class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        
        for(int i=0;i<mat.size();i++){
            int cnt1=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1)
                    cnt1++;
                else 
                    break;
            }
           pq.push({cnt1,i});
        }
        
        vector<int> ans;
        while(k--){
            auto it=pq.top();
            pq.pop();
            ans.push_back(it.second);
        }
        
        return ans;
        
    }
};