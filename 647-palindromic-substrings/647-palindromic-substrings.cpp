class Solution {
public:
    
    bool isPal(string s, int st, int en){
        while(st<en){
            if(s[st]!=s[en])    return 0;
            st++, en--;
        }
        return 1;
    }
    
    int countSubstrings(string s) {
        int n=s.length();
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(isPal(s, i, j))
                    res++;
            }
        }
        return res;
    }
    
};