// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
		int binary_to_decimal(string str)
		{
		    // Code here.
		    int res=0;
		    int n=str.size();
		    reverse(str.begin(), str.end());
		    int i=0;
		    int p=1;
		    while(i<n){
		        if(str[i]=='1'){
		              res+=p;
		        }
		      p*=2;
		        i++;
		    }
		    return res;
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	string str;
    	cin >> str;
    	Solution ob;
    	int  ans = ob.binary_to_decimal(str);
    	cout << ans <<"\n";
    }
	return 0;
}  // } Driver Code Ends