class Solution {
public:
    int atMostNGivenDigitSet(vector<string>& digits, int n) {
        string s=to_string(n);
        int digit=s.size(), d_sz=digits.size(), ans=0;
        
        for(int i=1;i<digit;i++) 
            ans+=pow(d_sz,i); // 1digit + 2digit +...... n-1digit
        
        for(int i=0;i<digit;i++){ // start from left most digit of n
            bool equal=false; // same number n
            for(auto &d:digits){
                if(d[0]<s[i])
                    ans+=pow(d_sz, digit-i-1);
                else if(d[0]==s[i])
                    equal=true;
            }
            
            if(!equal)
                return ans;
        }
        return ans+1; // including n        
    }
};