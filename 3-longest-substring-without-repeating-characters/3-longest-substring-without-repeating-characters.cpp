class Solution {
public:

    int lengthOfLongestSubstring(string s) {
        int ans=0, start=-1;
        vector<int> idx(256,-1);

       for(int i=0;i<s.length();i++){
                if(idx[s[i]] > start)
                    start=idx[s[i]];
            
               idx[s[i]]=i;
               ans=max(ans, i-start);
            }
        return ans;
    
    }
};