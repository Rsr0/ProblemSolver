// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

static bool cmp(pair<long long, long double> p1, pair<long long, long double>p2){
	    return (p1.second/p1.first) > (p2.second/p2.first);    
	}

bool isPerfectSq(long long num)
	{
	    long long x = sqrt(num);
	    return (x*x==num);
	}
	public:
	
	
	long double maximumProfit(int n, long long C, vector<long long> w, vector<long long> p){
	    // Code here.
	    vector<pair<long long, long double>> v;
	    for(int i=0;i<n;i++){
	        if(!isPerfectSq(w[i])){
	           v.push_back({w[i],p[i]});
	        }
	    }
	    
	    long double ans=0;
	    long long curr=0;
	    sort(v.begin(), v.end(), cmp);
	    for(it:v){
	        if(it.first + curr <= C){
	            ans+=it.second;
	            curr+=it.first;
	        }
	        
	        else if(curr<C){
	            long long diff=C-curr;
	           // if(ceil((double)sqrt(diff)) != floor((double)sqrt(diff))){
	            long double x=(long double)((long double)it.second/it.first)*diff;
	           // cout<<(long double)diff/it.first;
	            ans+=x;
	            break;
	           // }
	        }
	        else
	            break;
	            

	    }
	 return ans;
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		long long C;
		cin >> n >> C;
		vector<long long > w(n), p(n);
		for(int i = 0; i < n; i++){
		    cin >> w[i] >> p[i];
		}
		Solution ob;
		long double ans = ob.maximumProfit(n, C, w, p);
		cout << fixed << setprecision(3) << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends