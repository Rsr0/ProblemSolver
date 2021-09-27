class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> str;
        // int n=emails.size();
        for(auto s:emails){
            string t="";
            for(int i=0;i<s.size();i++){
                if(s[i]=='.')
                    continue;
                if(s[i]=='+')
                    while(s[i]!='@')    i++;
                
                t+=s[i];
                if(s[i]=='@'){
                    while(s[++i]!='\0')
                        t+=s[i];
                }
                
            }
            str.insert(t);
        }
        return str.size();
    }
};