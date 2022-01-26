// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    vector<int> TopK(vector<int>& arr, int k)
    {
        // code here
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> mp;
        
        for(int i=0;i<arr.size();i++)
            mp[arr[i]]++;
            
        for(auto it:mp)
            pq.push({it.second, it.first});
        
        vector<int> res;
        while(k--){
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k ;
        cin>>n;
        
        vector<int>array(n);
        
        for(int i=0; i<n; i++)
            cin>>array[i];
            
        cin>>k;
        
        Solution obj;
        vector<int> result = obj.TopK(array,k);
        
        for(int i=0; i<result.size();i++)
            cout<<result[i]<<" ";

        cout<<"\n";

    }
    return 0;
}  // } Driver Code Ends