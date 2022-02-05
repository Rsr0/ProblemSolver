// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    
    public:
    int transfigure (string A, string B)
    {
    	// Your code goes here
    	int n=A.size();
    	if(n!=B.size()) return -1;
    	
    	int check[200]={0};
    	for (int i=0;i<n;i++){
    	    check[A[i]]++;
    	    check[B[i]]--;
    	}
    	
    	for(int i=0;i<200;i++)
    	    if(check[i])    
    	        return -1;
    	 
    	int res=0, i=n-1, j=n-1;
    	while(i>=0){
    	    if(A[i]==B[j])  
    	        j--;
    	    else  
    	        res++;
    	    i--;
    	}
    return res;
    }
};

// { Driver Code Starts.


int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}  // } Driver Code Ends