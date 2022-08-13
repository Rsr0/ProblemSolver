class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int>ans;
        int n=words.size(), m=words[0].size();
        int len=n*m;
        
        if(s.size()<len)    return ans;
        
        for(int i=0;i<=s.size()-len;i++){
            unordered_map<string,int> mp;
            for(int j=0;j<words.size();j++)   // reset words
                mp[words[j]]++;
            
            int k;
            for(k=0;k<n;k++){
                string t=s.substr(i+k*m,m); // word by word
                if(mp.count(t)==0)  break;
                else{
                    if(mp[t]!=0)    mp[t]--;
                    else    break;
                }
            }
        if(k==n)
            ans.push_back(i);
        }
        return ans;
    }
};