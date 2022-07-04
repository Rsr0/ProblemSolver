// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
unordered_set<string> mp;
vector<string> ans;

void solve(string s, int idx, string t){
    if(idx>=s.size()){
        t.pop_back();
        ans.push_back(t);
    }
    
    for(int i=idx;i<s.size();i++){
        string str=s.substr(idx, i-idx+1);
        if(mp.find(str)!=mp.end())
            solve(s, i+1, t+str+" ");
    }
}

    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        // code here
        for(auto d:dict)
            mp.insert(d);
        
        solve(s,0,"");
        return ans;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends