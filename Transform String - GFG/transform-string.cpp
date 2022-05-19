// { Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {   
        if(A.size() != B.size()) return -1;
        if(A==B) return 0;
        unordered_map <char,int> u1, u2;
        for(auto i:A)
            u1[i]++;
        for(auto i:B)
            u2[i]++;
        if(u1!=u2) return -1;
        
        int i=A.size()-1, j=B.size()-1, count=0;
        while(i>=0){
            if(A[i]==B[j])
                j--;
            else
                count++;
            i--;
        }
        return count;
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
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}  // } Driver Code Ends