// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long countStrings(string S)
    {
        // code here
        long long freq[26]={0};
        for(auto it:S)
            freq[it-'a']++;
            
        long long dup=0;
        for(int i=0;i<26;i++)
            dup+=freq[i] * (freq[i]-1)/2;
            
        
        long long n=S.length();
        long long res=n*(n-1)/2 - dup;
        return dup>0 ? 1+res : res;
    }
};


// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution ob;
        long long ans = ob.countStrings(S);
        cout<<ans<<endl;
    }
    return 0;
}   // } Driver Code Ends