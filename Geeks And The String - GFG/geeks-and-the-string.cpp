//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        // code here
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(!st.empty() && st.top()==s[i]){
                st.pop();
                continue;
            }
            st.push(s[i]);
            
        }
        
        s="";
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        
        if(s.empty())   return "-1";
        
        reverse(s.begin(),s.end());
        return s;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends