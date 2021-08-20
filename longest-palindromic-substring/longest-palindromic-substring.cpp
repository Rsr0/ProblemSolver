class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int start=0, end=0, mx=1;
        if(n<=1)    return s;
        
        //Odd length
            for(int i=1; i<n-1;i++){
            int l=i, r=i, len;
                while(l>=0 && r<n){
                    if(s[l]==s[r])
                        l--, r++;
                    else
                        break;
                    
                }
                len=r-l-1;
                if(len > mx)
                {
                    mx=len;
                    start=l+1;
                    end=r-1;
                }
            }
        
        //Even length
             for(int i=0; i<n-1;i++){   //"bb"
            int l,r, len;
                l=i; r=i+1;
                while(l>=0 && r<n){
                    if(s[l]==s[r])
                        l--, r++;
                    else
                        break;
                    
                }
                len=r-l-1;
                if(len > mx)
                {
                    mx=len;
                    start=l+1;
                    end=r-1;
                }
            }
        
        return(s.substr(start,mx));
    }
        
};