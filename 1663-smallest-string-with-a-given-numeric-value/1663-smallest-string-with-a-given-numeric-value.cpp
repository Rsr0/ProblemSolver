class Solution {
public:
    string getSmallestString(int n, int k) {
        string res="";
        
        while(n--){
            int left=n;
            int max_val=n*26; // n-1 * 26
            if(k>max_val){
                res+=(k-max_val-1) + 'a';
                k=max_val;
            }
            else{
                res+='a';
                k--;
            }
        }
        return res;
    }
};