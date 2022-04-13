// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:

	
	int MinCoin(vector<int>nums, int amount)
	{
	    // Code here
	    vector<long long int> dp(amount+1,INT_MAX);
	    sort(nums.begin(), nums.end());
	    dp[0]=0;
	    
	    for(int i=1;i<=amount;i++){
	        for(int j=0;j<nums.size() && nums[j]<=i;j++){
	            dp[i]=min(dp[i], 1LL + dp[i-nums[j]]);
	        }
	    }
	    
	    if(dp[amount]>=INT_MAX)
	        return -1;
	    return dp[amount];
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