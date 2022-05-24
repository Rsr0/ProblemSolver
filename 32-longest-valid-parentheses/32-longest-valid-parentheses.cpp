class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.length();
        if(n<=1) return 0;
        int open=0, close=0;
        int maxLength=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') open++;
            else close++;   // s[i]==')'
            
            if(open==close) 
                maxLength=max(maxLength, open+close);
            else if(close>open){
                open=close=0;
            }
        }
        
        open=close=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='(') open++;
            else close++;
            
            if(open==close) 
                maxLength=max(maxLength, open+close);
            else if(open>close) 
                open=close=0;
        }
        
        return maxLength;
    }
};