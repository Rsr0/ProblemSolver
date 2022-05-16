// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    int ans=0;
	    long long int sum=0;
	    unordered_map<long long int, int>  mp;
	     for(int i=0; i<n; i++){
	        sum += arr[i];
	        int r = sum%k;
	        if(r<0)
	            r+=k;
	        if(r==0)    
	            ans=max(ans,i+1);
	        if(mp.find(r)!=mp.end())
	            ans=max(ans, i-mp[r]);
	        else
	            mp[r]=i;
	     }
	     return ans;
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}
  // } Driver Code Ends