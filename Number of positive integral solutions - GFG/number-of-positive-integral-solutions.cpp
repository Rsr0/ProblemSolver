// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
long fact(int n){
    long ans=1;
    for(int i=1;i<=n;i++)    
        ans*=i;
    return ans;
}

    long posIntSol(string s)
    {
        int var=0,i=0;
        while(s[i]!= '='){
            if(s[i]!= '+' && s[i]!=  '=')
                var++;
            i++;
        }
        
        long den=fact(var-1);
        string r=s.substr(i+1,s.size()+1);
        int n=stoi(r);
        if(n==1)    return 0;
        long num=1;
        while(var>1){
            n--;
            num=num*n;
            var--;
        }
        return num/den;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.posIntSol(s)<<endl;
    }
    return 0;
}
  // } Driver Code Ends