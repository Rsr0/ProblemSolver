class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        reverse(s.begin(),s.end());
        
        string ans="", t="";
        int i=0;
        while(s[i]==' ') i++;
        while(i<n){
            if(s[i]==' '){
                i++;
                while(i<n && s[i]==' ') i++;
                reverse(t.begin(),t.end());
                ans+=t+' ';
                t="";
            }
            else{
                t+=s[i];
                i++;
            }             
        }
        
        reverse(t.begin(),t.end());
        ans+=t;
        int l=ans.length();
        if(ans[l-1]==' ') ans=ans.substr(0,l-1);

        return ans;
    }
};