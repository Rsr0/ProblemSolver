// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	bool isPrime(int n){
     for(int i=2;i*i<=n;i++){
	       if(n%i==0 || (n-2)%i==0)
	        return 0;
	   }
	    return 1;	    
	}
	
	int superPrimes(int n)
	{
	    // Your code goes here

	    int cnt=0;
	    for(int i=5;i<=n;i+=2){
	        if(isPrime(i))
	            cnt++;
	    }
	    return cnt;
	}
};

// { Driver Code Starts.

int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
   		Solution ob;
   		cout << ob.superPrimes(n) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends