// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
  int dp[501][501];
     int solve(string &s, string &t, int i, int j){
        if(i >= s.size()) return 501;
        if(j >= t.size())   return 1;
        if(dp[i][j] != -1) return dp[i][j];
        int k = j;
        for(; k < t.size(); k++){
            if(t[k] == s[i])
                break;
        }
        if(k == t.size()) return 1;  // not present
        int ans1 = solve(s, t, i + 1, j);
        int ans2 = 1 + solve(s, t, i + 1, k + 1);
        return dp[i][j] = min(ans1, ans2);
     }
    
    int shortestUnSub(string S, string T) {
        // code here
        int n = S.size();
        int m = T.size();
        memset(dp, -1, sizeof(dp));
        int ans = solve(S, T, 0, 0);
        return ans >= 501 ? -1 : ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        cin>>S>>T;

        Solution ob;
        cout << ob.shortestUnSub(S,T) << endl;
    }
    return 0;
}  // } Driver Code Ends