class Solution {
public:
    int scoreOfParentheses(string s) {
        int score=0;
        int x=2;  // depth_multiplier
        
        for(int i=1;i<s.size();i++){
            if(s[i]=='(')
               x=x<<1;      // x*=2;
            else{
                x=x>>1;     // x/=2;
                if(s[i-1]=='(')
                    score+=x;
            }
                
        }
    return score;
    }
    
};