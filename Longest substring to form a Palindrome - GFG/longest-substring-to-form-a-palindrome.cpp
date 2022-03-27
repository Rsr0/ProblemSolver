// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int longestSubstring(string S) {
        // code here
        int mask=0, res=0;
        map<int,int> mp;
        mp[mask]=-1;
        
        for(int i=0;i<S.size();i++){
            int t=S[i]-'a';
            mask^=(1<<t);
            if(mp[mask])
                res=max(res, i-mp[mask]);
            else
                mp[mask]=i;
            
            for(int j=0;j<26;j++){
                int mask2=mask^(1<<j);
                if(mp[mask2])
                    res=max(res, i-mp[mask2]);
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;

        Solution ob;
        cout << ob.longestSubstring(S) << endl;
    }
    return 0;
}  // } Driver Code Ends