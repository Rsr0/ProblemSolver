class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> m;
        if(s.size()==t.size()){
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
           
        }
        for(int i=0;i<t.size();i++){
            if(!m[t[i]]--)
                return false;
        }

        return true;
        }
        else
            return false;
    }
};