// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
public:

#define ll long long int
    long long int killinSpree(long long int n)
    {
        // Code Here
        ll i=1, ans=0;
        while(i*i<=n){
            n-=(i*i);
            ans++;
            i++;
        }
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        Solution obj;
        long long int ans = obj.killinSpree(n);
        cout<<ans<<"\n";
    }
    return 0;
}
  // } Driver Code Ends