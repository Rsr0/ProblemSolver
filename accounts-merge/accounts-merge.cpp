class Solution {
public:
    
    int find(vector<int>& par, int i){
        if(par[i]==i)
            return i;
        return par[i]=find(par, par[i]);
    }
    
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        vector<int> par(accounts.size(),0);
        unordered_map<string,int> email_id;
        
        for(int i=0;i<accounts.size();i++){
            par[i]=i;
            
            for(int j=1;j<accounts[i].size();j++){
                if(email_id.find(accounts[i][j])!=email_id.end()){
                    int f1=find(par, i);
                    int f2=find(par, email_id[accounts[i][j]]);
                    par[f1]=f2;   // union
                }
                else 
                    email_id[accounts[i][j]]=par[i];  // i
            }
        }
        
        unordered_map<int, vector<string>> mp;
        for(auto it: email_id){
            int f=find(par,it.second);
            mp[f].push_back(it.first);
        }
        
        vector<vector<string>> res;
        for(auto it:mp){
            vector<string> email=it.second;
            sort(email.begin(), email.end());
            email.insert(email.begin(), accounts[it.first][0]); // add names
            res.push_back(email);
        }
        return res;
    }
};