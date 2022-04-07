// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string LCP(string ar[], int n)
    {
        // code here
        sort(ar,ar+n);
        string ans="";
        for(int i=0;i<ar[0].size();i++){
            char c=ar[0][i];
            bool flag=true;
            
            for(int j=1;j<n;j++){
                if(ar[j][i]!=c)
                    flag=false;
            }
            if(!flag)
                break;
        
            ans+=c;
            
        }
        if(ans=="") return "-1";
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
	        int n;
	        cin>>n;
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}  // } Driver Code Ends