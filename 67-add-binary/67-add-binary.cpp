class Solution {
public:
    string addBinary(string a, string b) {
     int i=a.size()-1, j=b.size()-1;
        string res="";
        int s=0;   // digital sum
        while(i>=0 || j>=0 || s==1){
            s+=(i>=0)? a[i]-'0' : 0; 
            s+=(j>=0)? b[j]-'0' : 0;
           
            // digital sum is 1 or 3
            // add 1
            res=char(s%2+'0') + res;
            
            s/=2; //compute carry
            i--,j--;
        }
        return res;
    }
};