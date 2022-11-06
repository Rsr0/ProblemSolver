//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
        vector<int> res;
        int curr[10]={1,2,5,10,20,50,100,200,500,2000};

            
            for(int i=9;i>=0;i--){
                while(N>=curr[i]){
                    N-=curr[i];
                    res.push_back(curr[i]);
                }
                
                if(N<=0)
                    break;
            }
      return res;   
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends