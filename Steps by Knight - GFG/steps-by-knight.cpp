// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&knightPos,vector<int>&targetPos,int N)
	{
	    // Code here
	    int pos[8][2]={{-2,-1}, {-2,1}, {-1,2}, {1,2}, {2,1}, {2,-1}, {1,-2}, {-1,-2}};
	    bool vis[N+1][N+1];
	    memset(vis, 0, sizeof(vis));
	    vis[knightPos[0]][knightPos[1]]=1;
	    
	    queue<pair<int,int>> q;
	    q.push({knightPos[0], knightPos[1]});
	    int steps=0;
	    
	    while(!q.empty()){
	        int n=q.size();
	        while(n--){
	            auto p=q.front();
	            q.pop();
	            
	            int i=p.first, j=p.second;
	            if(i==targetPos[0] && j==targetPos[1] )
	                return steps;
	            
	            for(int k=0;k<8;k++){
	                int x=i+pos[k][0], y=j+pos[k][1];
	                if(x>0 && x<=N && y>0 && y<=N && !vis[x][y]){
	                    vis[x][y]=1;
	                    q.push({x,y});
	                }
	            }
	        }
	        steps++;
	    }
	    return -1;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends