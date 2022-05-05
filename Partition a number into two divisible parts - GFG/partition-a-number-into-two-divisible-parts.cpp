// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string stringPartition(string S, int a, int b){
        // code here 
        int n=S.size();
        string ans="";
        string s1="", s2="";
        for(int i=1;i<n;i++){
            s1=S.substr(0,i);
            s2=S.substr(i);
            if(stoi(s1)%a==0 && stoi(s2)%b==0){
                ans+=s1+" "+s2;
                return ans;
            }
        }
    return "-1";
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {   
        int a,b;
        string S;
        cin >> S >> a >> b;
        Solution ob;
        cout << ob.stringPartition(S,a,b) << endl;
    }
    return 0; 
}   // } Driver Code Ends