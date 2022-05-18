// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:

void solve(string& S, int i, vector<string>& v, string& t){
    
    if(i>=S.size()-1){
        t+=S[i];
        v.push_back(t);
        t.pop_back();
        return;
    }
    t+=S[i];
    t+=" ";
    solve(S,i+1,v,t);
    t.pop_back();
    solve(S,i+1,v,t);
    t.pop_back();

}

    vector<string> permutation(string S){
        // Code Here
        vector<string> ans;
        string t="";
        solve(S,0,ans,t);
        return ans;
    }
};

// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}
  // } Driver Code Ends