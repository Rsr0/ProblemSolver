class Solution {
public:
     bool check(string &a, string &b){
        if(a.size() != b.size()+1) return false;
        int i=0, j=0;
        bool flag=false;
        while(i<a.size() && j<b.size()){
            if(a[i]==b[j]){
                i++; j++;
            }else{
                if(flag) return false;
                i++;
                flag=true;
            }
        }
        return true;
    }
    
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), [](string a, string b){
        return a.size() < b.size();
        });
        
        int n=words.size();
        // NOW FIND LIS
        vector<int> dp(n, 1);
        int len=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                // checking if they differ by only one character
                if(check(words[i], words[j]) && dp[j]+1 > dp[i] ){   
                    dp[i]=dp[j]+1;
                    len=max(len, dp[i]);
                }
            }
        }
        return len;
    }
};