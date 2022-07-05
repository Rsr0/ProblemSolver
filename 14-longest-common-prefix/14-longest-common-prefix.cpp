class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int i=0, n=strs.size();
        string ans="";
        while(i<strs[0].size() && i<strs[n-1].size()){
            if(strs[0][i]!=strs[n-1][i])    break;
            ans+=strs[0][i];
            i++;
        }
        return ans;
    }
};