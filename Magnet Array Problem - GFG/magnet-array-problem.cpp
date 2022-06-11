// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
    double solve(double lo, double hi, double a[], int n){
        while(lo<hi){
            double mid=lo+(hi-lo)/2;
            double minF=1e-6, netF=0.0;
            
            for(int i=0;i<n;i++)
                netF+=1/(mid-a[i]);
                
            if(netF>minF)
                lo=mid;
            else if(netF< -minF)
                hi=mid;
            else
                return mid;
        }
    }
    
        void nullPoints(int n, double magnets[], double getAnswer[])
    {
        // Your code goes here 
        for(int i=0;i<n-1;i++){
            getAnswer[i]=solve(magnets[i],magnets[i+1],magnets,n);
        }
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
        double magnets[n], getAnswer[n];
        for(int i=0;i<n;i++)
        cin>>magnets[i];
        Solution ob;
        ob.nullPoints(n, magnets, getAnswer);
        
        for(int i=0; i<n-1; i++)
            printf("%0.2lf ",getAnswer[i]);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends