class Solution {
public:
    
    bool ispal(string s, int l, int r){
        while(l<r){
            if(s[l]!=s[r])
                return 0;
            l++,r--;
        }
        return 1;
    }
    
    void dfs(string s, int start, vector<string> &path, vector<vector<string>> &ans){
        if(s.size()==start){
            ans.push_back(path);
            return;
        }
        
        for(int i=start;i<s.size();i++){
            if(ispal(s,start,i)){
                path.push_back(s.substr(start, i-start+1));
                dfs(s, i+1, path, ans);
                path.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        
        dfs(s,0,path,ans);
        return ans;
    }
};