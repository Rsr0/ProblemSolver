// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

    public:
    vector<vector<int> > findDistance(vector<vector<char> >& matrix, int M, int N) 
    { 
        // Your code goes here
        queue<pair<int,int>> q;
        vector<vector<int> >  vis(M, vector<int> (N,0));
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]=='B'){
                    q.push({i,j});
                    vis[i][j]=0;
                }
                else if(matrix[i][j]=='W')
                    vis[i][j]=-1;
                else
                    vis[i][j]=-10;
            }
        }
        
        int cnt=1;
        int dx[4]={0,1,0,-1};
        int dy[4]={1,0,-1,0};
        while(!q.empty()){
            int n=q.size();
            while(n--){
                auto it=q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    int x=dx[i] + it.first;
                    int y=dy[i] + it.second;
                    if(x>=0 && y>=0 && x<M && y<N && vis[x][y]==-10){
                        q.push({x,y});
                        vis[x][y]=cnt;
                    }
                }
            }
            cnt++;
        }
        
        // remaining open spaces 0s
         for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(vis[i][j]==-10)
                    vis[i][j]=-1;
            }
         }
        return vis;
    } 
};

// { Driver Code Starts.


int main()
{

    int t;
    cin >> t;
    while(t--)
    {
    	int M,N;
        cin>>M;
        cin>>N;

        vector<vector<char> > matrix(M);
        for(int i=0; i<M; ++i)
        {
            matrix[i].resize(N);
            for (int j = 0; j < N; ++j)
                cin>>matrix[i][j];
        }

        vector<vector<int> >result;
        Solution obj;
        result = obj.findDistance(matrix, M,N); 
        for(int i=0; i<M; ++i)
        {
            for (int j = 0; j < N; ++j)
                cout<<result[i][j]<<" ";
            cout<<"\n";
        }
    }

    return 0;
}  // } Driver Code Ends