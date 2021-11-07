class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0")
            return "0";
        
        int n1=num1.size(), n2=num2.size();
        vector<int> res(n1+n2,0);   // max digits in *
        
        for(int i=n1-1;i>=0;i--){
            for(int j=n2-1;j>=0;j--){
                int prod=(num1[i]-'0') * (num2[j]-'0');
                prod+=res[i+j+1];   // add prev value
                res[i+j+1]=prod%10;
                res[i+j]+=prod/10;   // carry
                
            }
        }
        
        int c=0;
        while(c<(n1+n2) && res[c]==0)    // skip leading 0s
            c++;
        
        string ans="";
        while(c<(n1+n2))
            ans+=(char)(res[c++]+'0');
        
        return ans;
    }
};