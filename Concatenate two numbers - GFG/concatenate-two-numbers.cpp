// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    long long countPairs(int N, int X, vector<int> numbers){
        // code here
         unordered_map<string,int> mp;
         for(auto it:numbers){
             string s=to_string(it);
             mp[s]++;
         }
         
         string x=to_string(X);
         int count=0;
         for(int i=1;i<x.size();i++){
             string t1=x.substr(0,i);
             string t2=x.substr(i);
             if(mp.find(t1)!=mp.end()){
                 if(mp.find(t2)!=mp.end()){
                     if(t1==t2)
                        count+=mp[t1] * (mp[t1]-1);
                     else
                        count+=mp[t1]*mp[t2];
                 }
             }
         }
         return count;
    }
}; 

// { Driver Code Starts.
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        vector<int> numbers(N);
        for(int i=0;i<N;i++)
            cin>>numbers[i];
        Solution ob;
        long long ans = ob.countPairs(N, X, numbers);
        cout<<ans<<endl;
        
    }

    return 0; 
}  // } Driver Code Ends