// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        // Your code here
        string s;
        while(sum>=0 && n>0){
            if(sum>=9){
             s+="9";
                sum-=9;
            }
            else{
                s+=to_string(sum);
                sum=0;
            }
            n--;
        }
        
        // cout<<s;
        if(sum>0 || n<0)    return "-1";
        // while(n>0){
        //         s+="0";
        // }
        return s;
    }
};

// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends