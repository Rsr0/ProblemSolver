class Solution {
public:
    string reverseWords(string s) {
        string t="";
        vector<string> v;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(!t.empty()){
                    v.push_back(t);
                    t="";
                }
            }
            else
                t+=s[i];
        }
        if(!t.empty())
            v.push_back(t);
        
        reverse(v.begin(), v.end());
        t="";
        for(int i=0;i<v.size();i++)
            t+=v[i]+" ";
        t.pop_back();
        return t;
    }
};