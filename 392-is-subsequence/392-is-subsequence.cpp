class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length()==0) return 1;
        if(s.length()> t.length()) return 0;
        int j=0;
        for(int i=0;i<t.length();i++){
            if(j<s.length() && s[j]==t[i])
                j++;
        }
        if(j==s.length()) return 1;
        return 0;
    }
};