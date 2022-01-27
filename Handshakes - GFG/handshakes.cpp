// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:

    int catalan(int n){
        if(n<=1)    return 1;
        int ans=0;
        for(int i=0;i<n;i++)
            ans+=catalan(i)*catalan(n-i-1);
            
        return ans;
    }

    int count(int N){
        // code here
        return catalan(N/2);
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.count(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends