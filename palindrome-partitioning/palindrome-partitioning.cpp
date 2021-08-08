class Solution {
public:
    vector<vector<string>> ans;
    vector<vector<string>> partition(string s) {
        vector<string> v;
        dfs(s,0,v);    
        return ans;
    }
    
    void dfs(string s, int start, vector<string>& v){
        if(s.length()==start){
            ans.push_back(v);
            return;
        }
        
        for(int i=start;i<s.length();i++){
            if(isPal(s,start,i)){
                v.push_back(s.substr(start,i-start+1));
                dfs(s, i+1, v);
                v.pop_back(); // backtrack
            }
        }

    }
    
    

    
    bool isPal(string s, int start, int end){
    while(start<=end){
        if(s[start]!=s[end])
            return false;
        
        start++; end--;
    }
        return true;
        
    }
};