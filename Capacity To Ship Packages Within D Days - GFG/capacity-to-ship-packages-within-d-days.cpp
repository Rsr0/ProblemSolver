// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
  bool isValid(int cap, int a[], int n, int d){
      int sum=0, days=1;
      for(int i=0;i<n;i++){
          if(sum+a[i]<=cap)
            sum+=a[i];
          else{
              if(a[i]>cap) return 0;
              sum=a[i];
              days++;
          }
      }
      return days<=d;
  }
  
  
    int leastWeightCapacity(int arr[], int N, int D) {
        // code here
        int low=1, high=accumulate(arr, arr+N, 0);
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isValid(mid, arr, N, D)){
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}  // } Driver Code Ends