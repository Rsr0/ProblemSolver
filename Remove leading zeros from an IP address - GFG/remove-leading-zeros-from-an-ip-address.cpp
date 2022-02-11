// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
  public:
    string newIPAdd (string s)
    {
        //code here.
        int n=s.size();
        int i=0;
        string t="";
        long long x=0;
        string res="";
        while(i<n){
            if(s[i]!='.'){
                while(i<n && s[i]=='0')    i++;
                
                while(i<n &&  s[i]!='.')
                    t+=s[i++];
                if(t=="")
                    t+="0";
                
            }
            
            if(i<n && s[i]=='.'){
                res+=t+s[i];
                t="";
            }
            i++;
        }
        if(!t.empty()){
            res+=t;
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.newIPAdd (s) << endl;
    }
}

  // } Driver Code Ends