// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:

bool isValid(int i,int j,int n){
    return !(i<0 or j<0 or i>=n or j>=n);
}

	double findProb(int n,int start_x, int start_y, int steps)
	{
	    // Code here
	     vector<pair<int,int>>moves{{-1,2},{-2,1},{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1}};
	     vector<vector<double>>curr(n,vector<double>(n,0));
         curr[start_x][start_y]=1;
         for(int k=1;k<=steps;k++){
             vector<vector<double>>next(n,vector<double>(n,0));
             for(int i=0;i<n;i++){
                 for(int j=0;j<n;j++){
                     if(curr[i][j]){
                       for(auto it:moves){
                           int x=i+it.first;
                           int y=j+it.second;
                           if(isValid(x,y,n))
                            next[x][y]+=curr[i][j]/8.0;
                       }
                     }
                 }
             }
             curr=next;
         }
         double ans=0;
         for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                ans+=curr[i][j];
            
        return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N, start_x, start_y, steps;
		cin >> N >> start_x >> start_y >> steps;
		Solution ob;
		double ans = ob.findProb(N, start_x, start_y, steps);
		cout << fixed << setprecision(6) << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends