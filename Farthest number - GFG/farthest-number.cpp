// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    vector<int> farNumber(int N,vector<int> Arr){
        //code here
        vector<int> ans(N);
        vector<int> min_right(N);
        min_right[N-1]=Arr[N-1];
        
        for(int i=N-2;i>=0;i--){
            min_right[i]=min(Arr[i], min_right[i+1]);    
        }
        
        for(int i=0;i<N;i++){
            int lo=i+1, hi=N-1, idx=-1;
            
            while(lo<=hi){
                int mid=(lo+hi)/2;
                if(min_right[mid]<Arr[i]){
                    idx=mid;
                    lo=mid+1;
                }
                else
                    hi=mid-1;
            }
            ans[i]=idx;
        }
        
        return ans;
    }
};

// { Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++)
            cin>>Arr[i];
        Solution obj;
        vector<int> answer=obj.farNumber(N,Arr);
        for(auto i:answer)
            cout<<i<<" ";
        cout<<endl;
  }
}  // } Driver Code Ends