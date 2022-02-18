// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
  
  /*
  idx=a[i];
  num=a[idx] % n; // original number
  a[i] += num * n  
  
  a[i]=a[i]/n  // modified
  */
  
    void prank(long long a[], int n){
        // code here
        for(int i=0;i<n;i++){
            long long idx=a[i];
            long long num=a[idx] % n;
            a[i]+= num * n;
        }
        
        for(int i=0;i<n;i++){
            a[i]=a[i]/n;
        }
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i = 0 ;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        ob.prank(a,n);

        for(int i = 0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
}

  // } Driver Code Ends