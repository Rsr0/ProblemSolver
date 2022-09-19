class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string, vector<string> > mp;
        for(int i=0;i<paths.size();i++){
            int j=0;
           
            string dir="";
            while(j<paths[i].size() && paths[i][j]!=' '){
               dir+=paths[i][j];
                j++;
            }
            j++;
            
        
            while(j<paths[i].size()){
            string file="";
            while(j<paths[i].size() && paths[i][j]!='('){
                file+=paths[i][j];
                j++;
            }
            j++;
            
            string content="";
            while(j<paths[i].size() && paths[i][j]!=')'){
                content+=paths[i][j];
                j++;
            }
            j+=2;
            mp[content].push_back(dir+'/'+file);
        
            }
            
        }
        
        
        vector<vector<string>> ans;
        for(auto it:mp){
            vector<string> v;
            if(it.second.size()>1){
            for(auto i:it.second)
                v.push_back(i);
            ans.push_back(v);
            }
        }
        
        return ans;
    }
};