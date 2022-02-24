// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> primeDivision(int N){
        // code here
        // Sieve method
        vector<int>isPrime(N,1);   
        for(int i=2;i*i<N;i++){
            if(isPrime[i]){
            for(int j=i*i;j<N;j+=i)
                isPrime[j]=0;
            }
        }
        
        for(int i=2;i<=(N/2)+1;i++){
            if(isPrime[i] && isPrime[N-i])
                return {i,N-i};
        }
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}  // } Driver Code Ends