// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
  
  vector<long long> fact;
  void calFact(){
      fact.resize(18,1LL);
      
      for(int i=1;i<18;i++)
        fact[i] = i*fact[i-1];
  }
  
    long long findRank(string str) {
        //code here
        calFact();
        int n=str.size();
        long long rank=1LL;
        
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=i+1;j<n;j++){  
                if(str[i] > str[j])
                    cnt++;
            }
            rank+=cnt*fact[n-i-1];
        }
        return rank;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        Solution obj;
        long long ans = obj.findRank(s);
        cout<<ans<<endl;
    }
}  // } Driver Code Ends