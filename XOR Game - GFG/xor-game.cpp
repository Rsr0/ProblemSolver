// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int xorCal(int k){
        // code here
        if(k%2==0)  return -1;
        if(k==1) return 2;
        // int a=k>>1; // k/2
        // int b=a^k;
        // return abs(a-b)==1 ? min(a,b) : -1; 
        
        if(((k+1)&k)==0)
            return k/2;
        else
            return -1;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        
        Solution ob;
        cout<<ob.xorCal(k)<<"\n";
    }
    return 0;
}  // } Driver Code Ends