// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int dp[101][10001];
	
	int solve(vector<int> nums, int i, int amt){
	    if(amt<0 || i<0) return INT_MAX-1;
	    if(amt==0) return 0;
	    
	    if(dp[i][amt]!=-1)  return dp[i][amt];
	    
	    if(nums[i]<=amt)
	        return dp[i][amt]=min(1+solve(nums, i, amt-nums[i]), solve(nums, i-1, amt));
	   
	   return dp[i][amt]=solve(nums, i-1, amt);
	}
	
	int MinCoin(vector<int>nums, int amount)
	{
	    // Code here
	    memset(dp,-1,sizeof(dp));
	    int ans=solve(nums, nums.size()-1, amount);
	    return ans>=INT_MAX-1 ? -1:ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, amount;
		cin >> n >> amount;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.MinCoin(nums, amount);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends