// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string s) {
        // Code here
        int n=s.size(), res=INT_MAX;
        vector<int> freq(3,0);
        
        for(int i=0, j=0;i<n;i++){
            freq[s[i]-'0']++;
            while(freq[s[j]-'0']>1){
                freq[s[j]-'0']--;
                j++;
            }
            if(freq[0]>=1 && freq[1]>=1 && freq[2]>=1)
                res=min(res, i-j+1);
        }
        
        return res==INT_MAX ? -1: res;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}  // } Driver Code Ends