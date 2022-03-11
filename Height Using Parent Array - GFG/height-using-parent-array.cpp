// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    int solve(int root, vector<vector<int>> &adj){
        if(adj[root].empty())   
            return 1;
        
        int h=-1;
        for(int ch:adj[root])
            h=max(h, solve(ch, adj));
            
        return h+1;
    }

    int findHeight(int N, int arr[]){
        // code here
        vector<vector<int>> adj(N);
        int root=-1;
        for(int i=0;i<N;i++){
            if(arr[i]==-1)  
                root=i;
            else
                adj[arr[i]].push_back(i);
        }
        return solve(root, adj);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.findHeight(N, arr)<<"\n";
    }
    return 0;
}  // } Driver Code Ends