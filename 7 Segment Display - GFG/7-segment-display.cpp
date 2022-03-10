// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    string sevenSegments(string S, int N) {
        // code here
        S=S.substr(0,N);
        int count[10]={6,2,5,5,4,5,6,3,7,5};
        int segments=0;
        for(auto i:S){
            segments+=count[i-'0'];
        }
        // cout<<segments;
        string ans="";
     
        for(int i=N-1;i>=0;i--){
            for(int j=0;j<10;j++){
                if(segments-count[j]>=2*i && segments-count[j]<=7*i){
                    ans+=(j+'0');
                    segments-=count[j];
                    break;
                }
            }
        }
      
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        string S;
        cin>>S;

        Solution ob;
        cout << ob.sevenSegments(S,N) << endl;
    }
    return 0;
}  // } Driver Code Ends