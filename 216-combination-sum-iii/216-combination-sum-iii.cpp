class Solution {
public:
    
    void solve(int k, int n, int st, vector<int> &v, vector<vector<int>> &res){
        if(k<0 || n<0)  return;
        if(k==0 && n==0){
            res.push_back(v);
            return;
        }
        
        for(int i=st;i<10;i++){
            v.push_back(i);
            solve(k-1, n-i, i+1, v, res);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> v;
        solve(k,n,1,v,res);
        return res;
    }
};