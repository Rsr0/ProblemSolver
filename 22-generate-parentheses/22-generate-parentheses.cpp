class Solution {
public:
    
    void solve(vector<string> &res, string s, int left, int right ){
        if(left==0 && right==0){
            res.push_back(s);
            return;
        }
        
        if(left>0) solve(res, s+"(", left-1, right);
        if(right>left) solve(res, s+")", left, right-1);
        
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        solve(res, "", n, n);
        return res;
    }
};