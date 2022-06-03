// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isPossible(long long S, long long N, long long X, long long A[])
    {
        // code here
        vector<long long> v;
        long long sum=S;
        v.push_back(S);
        for(int i=1;i<=N;i++){
            if(sum>X)
                break;
            v.push_back(sum+A[i-1]);
            sum+=v[i];
        }
        
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]<=X)
                X-=v[i];
            if(X==0)
                return 1;
        }
        return 0;
        
     
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long S, N, X;
        cin>>S>>N>>X;
        long long A[N];
        for(long long i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        if(ob.isPossible(S, N, X, A))
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}  // } Driver Code Ends