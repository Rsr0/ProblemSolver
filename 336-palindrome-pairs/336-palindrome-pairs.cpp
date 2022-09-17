class Solution {
public:
    
    bool isPal(string& word, int i, int j) {
    while (i < j)
        if (word[i++] != word[j--]) return false;
    return true;
    }
    
    vector<vector<int>> palindromePairs(vector<string>& words) {
         unordered_map<string, int> mp;
        vector<vector<int>> ans;
        for(int i=0;i<words.size();i++)
            mp[words[i]]=i;
      
        for (int i = 0; i < words.size(); i++) {
            if (words[i] == "") {
                 for (int j = 0; j < words.size(); j++) {
                    string& w = words[j];
                    if (isPal(w, 0, w.size()-1) && j != i) {
                        ans.push_back(vector<int> {i, j});
                        ans.push_back(vector<int> {j, i});
                    }
                 }
                continue;
            }
            
            string s=words[i];
            reverse(s.begin(), s.end());
            if(mp.find(s)!=mp.end()){
                if(mp[s]!=i)
                    ans.push_back(vector<int> {i, mp[s]});
            }
            
             for (int j = 1; j < s.size(); j++) {
                if (isPal(s, 0, j-1)) {
                    string temp = s.substr(j, s.size()-j);
                    if (mp.find(temp) != mp.end())
                        ans.push_back(vector<int> {i, mp[temp]});
                }
                if (isPal(s, j, s.size()-1)) {
                    string temp = s.substr(0, j);
                    if (mp.find(temp) != mp.end())
                        ans.push_back(vector<int> {mp[temp], i});
                }
        }          
    }
          return ans;
    }
};