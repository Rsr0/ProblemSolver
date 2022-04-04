// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string previousNumber(string S){
        // code here
        int i=S.size()-2;
        while(i>=0 && S[i]<=S[i+1])
            i--;
        
        if(i<0) return "-1";
        
        int j=S.size()-1;
        while(j>i && S[i]<=S[j])
            j--;
        
        while(j>0 && S[j]==S[j-1]) //99999000000  -> 99990900000
            j--;
        
        swap(S[i],S[j]);
        if(S[0]=='0')
            return "-1";
        
        return S;
        
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.previousNumber(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends