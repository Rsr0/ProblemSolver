// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    long mod=1e9+7;
	public:
	int TotalWays(int N)
	{
	    // Code here
	    long prev=1, curr=2, temp;
	    for(int i=2;i<=N;i++){
	        temp=(prev%mod + curr%mod)%mod;
	        prev=curr;
	        curr=temp;
	    }
	    return (curr%mod * curr%mod)%mod;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends