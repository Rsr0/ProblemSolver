class Solution {
public:
    
    int par[26];
    int find(int x){
        return par[x]==x? x : find(par[x]);
    }
    
    
    bool equationsPossible(vector<string>& equations) {
        int n=equations.size();
        
        for(int i=0;i<26;i++)
            par[i]=i;
        
        for(auto e: equations){
            if(e[1]=='='){
                par[find(e[0]-'a')]=find(e[3]-'a');
            }
        }
        
        for(auto e: equations){
            if(e[1]=='!' && find(e[0]-'a')==find(e[3]-'a'))
                return 0;
        }
        return 1;
        
    }
};