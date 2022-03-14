// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int biGraph(int arr[], int n, int e) {
        // code here
        if(n<=2)
            return 1;
        
        vector<int> deg(n+1,0);
        for(int i=0;i<2*e;i+=2){
            int u=arr[i], v=arr[i+1];
            deg[u]++;
            deg[v]++;
            
        }
        
        
        for(int i=0;i<n;i++){
            if(deg[i]<2)
                return 0;
        }
        return 1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,e;
        cin>>n>>e;
        
        int arr[2*e];
        for(int i=0; i<2*e; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.biGraph(arr,n,e) << endl;
    }
    return 0;
}  // } Driver Code Ends