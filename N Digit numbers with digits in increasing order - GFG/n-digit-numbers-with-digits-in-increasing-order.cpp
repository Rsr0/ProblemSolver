// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:

    void solve(int n, int num, int curr, vector<int> &ans){
        if(n==0){
            ans.push_back(num);
            return;
        }
        
        for(int i=curr;i<=9;i++)
            solve(n-1, num*10+i, i+1, ans);
    }

    vector<int> increasingNumbers(int N)
    {
        // Write Your Code here
        vector<int> ans;
        if(N==1){
            for(int i=0;i<10;i++)
                ans.push_back(i);
            return ans;
        }
        
        solve(N,0,1,ans);
        return ans;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> ans = ob.increasingNumbers(N);
        for(auto num : ans){
            cout<< num <<" ";
        }
        cout<<endl;
        
    }
    return 0;
}  // } Driver Code Ends