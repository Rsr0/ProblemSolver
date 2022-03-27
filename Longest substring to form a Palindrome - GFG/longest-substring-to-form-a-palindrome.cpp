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
        map<int,int> mp;  // track last index of xor
        mp[mask]=-1;
        
        for(int i=0;i<S.size();i++){
            int t=S[i]-'a';
        // odd times -> on the bit
        // even times -> off the bit
            mask^=(1<<t);
        
            if(mp[mask]) // pal from mp[mask] to i
                res=max(res, i-mp[mask]);
            else
                mp[mask]=i;
            
            for(int j=0;j<26;j++){  // check for odd 
            // cancel the odd times char
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