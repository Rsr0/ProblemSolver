class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n<=1) return s;
        
        int start=0, mx=0;
        // odd 
        for(int i=0;i<n-1;i++){
            int l=i, r=i;
            while(l>=0 && r<n){
                if(s[l]==s[r])
                    l--, r++;
                else 
                    break;
            }
            int len=r-l-1;
            if(len>mx){
                start=l+1;
                mx=len;
            }
        }
        
        //even
        for(int i=0;i<n-1;i++){
            int l=i, r=i+1;
            while(l>=0 && r<n){
                if(s[l]==s[r])
                    l--, r++;
                else 
                    break;
            }
            int len=r-l-1;
            if(len>mx){
                start=l+1;
                mx=len;
            }
        }
        
        return s.substr(start,mx);
    }
};