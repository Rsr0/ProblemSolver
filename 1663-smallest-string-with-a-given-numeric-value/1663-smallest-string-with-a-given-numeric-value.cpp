class Solution {
public:
    string getSmallestString(int n, int k) {
        string res(n,'a');
        k-=n;
        
        for(int i=n-1;k>0;i--){
            int ch=min(k,25);
            res[i]+=ch;
            k-=ch;
        }
        
        return res;
    }
};