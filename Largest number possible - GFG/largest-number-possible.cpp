//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        // code here
        int sum=0;
        string ans="";
        for(int i=0;i<N;i++){
            if(sum==S)  {
                if(ans.empty() && N>1) return "-1";
                ans+='0';
                
            }
            else if(S-sum>=9){
                ans+='9';
                sum+=9;
            }
            else if(S-sum<9){
                ans+=((S-sum)+'0');
                sum+=(S-sum);
            }
        }
        if(sum!=S)  return "-1";
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends