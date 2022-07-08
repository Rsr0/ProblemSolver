// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

pair<int,string> solve(int p[],int n,int low,int high, pair<int,string> dp[27][27]){
      if(low==high){
          char ch='A'+low;// char at index
          string s="";
          s+=ch;
          return {0,s};
      }
      
       if(dp[low][high].first!=-1)
          return dp[low][high];
      
       pair<int,string> res;
       res.first=INT_MAX;
       
        for(int i=low;i<high;i++){
          auto left=solve(p,n,low,i,dp); 
          auto right=solve(p,n,i+1,high,dp);
          
          int tempRes=left.first+right.first+(p[low]*p[i+1]*p[high+1]);// MCM
          if(res.first>tempRes)
          {
              res.first=tempRes;
              res.second="("+left.second+right.second+")";
          }
      }
      
      return dp[low][high]=res;
      
}

    string matrixChainOrder(int p[], int n){
        // code here
         pair<int,string> dp[27][27];
         pair<int,string> temp;
         temp.first=-1;
         
         for(int i=0;i<=n;i++)
             for(int j=0;j<=n;j++)
                dp[i][j]=temp;   //cnt=-1
        
         int low=0,high=n-2;
         return solve(p,n,low,high,dp).second;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[n];
        for(int i = 0;i < n;i++)
            cin>>p[i];
        
        Solution ob;
        cout<<ob.matrixChainOrder(p, n)<<"\n";
    }
    return 0;
}  // } Driver Code Ends