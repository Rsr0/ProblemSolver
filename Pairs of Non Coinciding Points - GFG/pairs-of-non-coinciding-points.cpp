// { Driver Code Starts

#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int numOfPairs(int X[], int Y[], int N) {
        // code here
        
        // counting equal x
        map<int,int> mp1;
        int cnt1=0;
        for(int i=0;i<N;i++){
            if(mp1.find(X[i])!=mp1.end())
                cnt1+=mp1[X[i]];
                
            mp1[X[i]]++;
        }
        
        // counting equal y
        map<int,int> mp2;
        int cnt2=0;
        for(int i=0;i<N;i++){
            if(mp2.find(Y[i])!=mp2.end())
                cnt2+=mp2[Y[i]];
                
            mp2[Y[i]]++;
        }
        
        // counting both pairs equal
        // counting equal x
        map<pair<int,int>,int> mp3;
        int cnt3=0;
        for(int i=0;i<N;i++){
            auto Z=make_pair(X[i],Y[i]);
            if(mp3.find(Z)!=mp3.end())
                cnt3+=mp3[Z];
            
            mp3[Z]++;
        }
        
        return cnt1+cnt2-2*cnt3;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        int X[N], Y[N];
        
        for(int i=0; i<N; i++)
            cin>>X[i];
        for(int i=0; i<N; i++)
            cin>>Y[i];

        Solution ob;
        cout << ob.numOfPairs(X,Y,N) << endl;
    }
    return 0;
}  // } Driver Code Ends