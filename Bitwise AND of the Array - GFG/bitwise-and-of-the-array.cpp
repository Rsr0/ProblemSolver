// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    int count(int N, vector<int> A,int X)
    {
        // code here
        int mask=0, ans=N; // worst case
       
       for(int i=30;i>=0;i--){
           if((X>>i) & 1){
               mask ^= (1<<i); // atleast equal to x ..........set bits in x
               continue;
           }
           
           int alt_mask = (mask ^ (1<<i));  // greater than x
           int cnt=0;
           for(int j=0;j<N;j++){
               if((A[j] & alt_mask) != alt_mask)
                    cnt++;
           }
           
           ans=min(ans, cnt);
       }
       
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        vector<int> A(N);
        for(auto &i:A)
            cin>>i;
        Solution obj;
        int ans = obj.count(N, A, X);
        cout<<ans<<endl;
    }
}  // } Driver Code Ends