// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

vector<pair<int,int>> ans;
void solve(int N, int st, int en, int mid){
    if(N==0) return;
    
    solve(N-1, st,mid,en);
    ans.push_back({st,en});
    solve(N-1, mid,en,st);
}

    vector<int> shiftPile(int N, int n){
        // code here
        solve(N,1,3,2);
        return {ans[n-1].first, ans[n-1].second};
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends