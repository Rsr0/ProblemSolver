// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
#define size 1001	
    bool brainGame(vector<int>nums) {
        // Code here.
        vector<int> v(size);
        for(int i=2;i<=size;i++){
                for(int j=i*2;j<=size;j+=i)
                    v[j]=max(v[j], 1+v[i]);
        }
        int ans=0;
        for(auto i:nums){
           ans=ans^v[i];
        }
        
        return ans!=0;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		bool ans = ob.brainGame(nums);
		if(ans)
			cout << "A\n";
		else cout << "B\n";
	}  
	return 0;
}  // } Driver Code Ends