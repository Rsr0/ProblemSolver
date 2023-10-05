//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  
  long long int solve(string s, int k){
      if(k<0)   return 0;
      long long int lo=0, hi=0,  ans=0, n=s.size(), cnt=0;
      vector<int> v(26,0);
      
      while(hi<n){
        v[s[hi]-'a']++;
        if(v[s[hi]-'a']==1) cnt++;
        
        while(cnt>k){
            v[s[lo]-'a']--;
            if(v[s[lo]-'a']==0) cnt--;
            lo++;
        }
        ans+=hi-lo+1;
        hi++;
      }
      
      return ans;
  }
  
  
    long long int substrCount (string s, int k) {
    	//code here.
    	return solve(s, k) - solve(s,k-1);
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends