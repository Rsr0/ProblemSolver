class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& p, string sw) {
        vector<vector<string>> ans;
        sort(p.begin(), p.end());
        for(int i=0;i<sw.size();++i){
             string s = sw.substr(0,i+1);
             int cnt=0;
            vector<string> v;
            for(int j=0;j<p.size()&&cnt<3;++j){
                if(p[j].find(s)==0){
                    v.push_back(p[j]);
                    cnt++;
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};