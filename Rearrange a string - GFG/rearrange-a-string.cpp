// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str)
    {
        //code here.
        sort(str.begin(), str.end());
    
        int sum=0, i=0;
        while(!(str[i]>='A' && str[i]<='Z')){
            sum+=str[i++]-'0';
        }
        
        string res=str.substr(i,str.size()-i);
        res+=to_string(sum);
        
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}

  // } Driver Code Ends