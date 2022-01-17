class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n=s.size(), m=pattern.size();
        vector<string> words;
        int  i=0;
        string t="";
        while(i<n){
            if(s[i]==' '){
                words.push_back(t);
                t="";
            }
            else{
                t+=s[i];
            }
            i++;
        }
        words.push_back(t); // last word
        if(words.size()!=m)
            return 0;
        
        unordered_map<char, string> mp;
        set<string> st;
        for(int i=0;i<m;i++){
            if(mp.count(pattern[i])==0 && st.count(words[i])==0){ // one-one mapping
                mp[pattern[i]]=words[i];
                st.insert(words[i]);
            }
            else if(mp.count(pattern[i])==0 && st.count(words[i]))  //many-one mapping ab -> dog dog
                return 0;
            else if(mp[pattern[i]]!=words[i]) // not equal aa -> dog cat
                return 0;
        }
     
        return 1;
    }
};