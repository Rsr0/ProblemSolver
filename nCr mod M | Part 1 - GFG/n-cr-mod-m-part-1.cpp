// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
public:
long long mod=1000003;
long long dp[1000004];

void fact(){
    dp[0]=1;
    for(long long int i=1;i<=mod;i++)
        dp[i]=( i%mod * dp[i-1]%mod)%mod;
}

long long modExpo(long long a, long long b){
    if(b==0) return 1;
    if(b%2==0) 
        return modExpo((long long)(a%mod * a%mod)%mod, b/2)%mod;
    else
        return ((long long) a%mod * modExpo(a,b-1)%mod)%mod;
}

long long lucas(long long n, long long r){
    if(n<r) return 0;
    long long a=dp[n], b=dp[r], c=dp[n-r];
    long long den=((long long) (b%mod * c%mod))%mod;
    long long num=((long long) a%mod * modExpo(den, mod-2)%mod)%mod;
    return num;
}

long long solve(long long n, long long r){
    if(r==0)    return 1;
    if(n<r) return 0;
    
    long long last_n=n%mod;
    long long last_r=r%mod;
    return ((long long) solve(n/mod, r/mod) * lucas(last_n, last_r))%mod;
}

int nCr(long long n, long long r) {
    // Code here
    fact();
    return solve(n,r);
}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long n, r;
		cin >> n >> r;
		Solution obj;
		int ans = obj.nCr(n, r);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends