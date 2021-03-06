// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {

  public:
    int maxCoins(int A[], int B[], int T, int N) {
        // code here
        if(T==0 || N==0 )    return 0;
        
        vector<pair<int,int>> v;
        for(int i=0;i<N;i++){
            v.push_back({B[i],A[i]});
        }
        
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        // for(int i=0;i<N;i++){
        //     cout<<v[i].first<<" : "<<v[i].second<<endl;
        // }
        int i=0, ans=0;
        while(T>0 && i<N){
            int plate=min(T,v[i].second);
            T-=plate;
            ans+=plate*v[i].first;
            i++;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int T,N;
        cin>>T>>N;
        
        int A[N], B[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<N; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.maxCoins(A,B,T,N) << endl;
    }
    return 0;
}  // } Driver Code Ends