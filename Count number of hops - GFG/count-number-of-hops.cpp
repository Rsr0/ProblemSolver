//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        if(n<3)    return n;
        if(n==3)    return 4;
        int mod=1e9+7;
        // your code here
        long long one=1, two=2, three=4;
        long long ans=0;
        for(int i=4;i<=n;i++){
            ans=(one%mod + two%mod + three%mod)%mod;
            one=two;
            two=three;
            three=ans;
        }
        return ans%mod;
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends