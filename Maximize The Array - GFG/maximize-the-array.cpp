// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> maximizeArray(int arr1[], int arr2[], int n) {
            // code here 
        vector<int> res;
        map<int,bool> mp;
        priority_queue<int, vector<int>> pq;
        for(int i=0;i<n;i++){
            pq.push(arr2[i]);
            pq.push(arr1[i]);
            mp[arr2[i]] = false;
            mp[arr1[i]] = false;
        }
        
        int l=0;
        while(!pq.empty() && l<n){
            if(mp[pq.top()]){
                while(!pq.empty() && mp[pq.top()])
                    pq.pop();
            }
            else{
                mp[pq.top()]=1;
                pq.pop();
                l++;
            }
        }
        
        for(int i=0;i<n;i++){
            if(mp[arr2[i]]){
                res.push_back(arr2[i]);
                mp[arr2[i]]=0;
            }
        }
        
        for(int i=0;i<n;i++){
            if(mp[arr1[i]]){
                res.push_back(arr1[i]);
                mp[arr1[i]]=0;
            }
        }
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.maximizeArray(arr1, arr2, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends