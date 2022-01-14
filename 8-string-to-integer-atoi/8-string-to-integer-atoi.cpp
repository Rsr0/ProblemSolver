class Solution {
public:
    int myAtoi(string s) {
        int ans=0, sign=1, i=0;
        
        while(s[i]==' ') // leading white space
            i++;
        
        if(s[i]=='-' || s[i]=='+'){ // sign
            if(s[i]=='-')
                sign=-1;
            i++;
        }
        
        while(s[i]>='0' && s[i]<='9'){   // start with number
            if(ans > INT_MAX/10 || (ans==INT_MAX/10 && s[i]-'0'>7) ){ //edge cases
                if(sign==1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }
            ans = 10*ans + (s[i]-'0');
            i++;
        }
        return sign*ans;
    }
};