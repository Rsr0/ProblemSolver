class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n=arr.size();
        if(n<2) return 0;
        
        unordered_map<int, vector<int>> mp; // value: i
        for(int i=0;i<n;i++){
            mp[arr[i]].push_back(i);
        }
        
        vector<bool> vis(n);
        queue<int> q;
        vis[0]=1;
        q.push(0);
        int step=0;
        while(!q.empty()){
            for(int x=q.size(); x>0; x--){
                int i=q.front();
                q.pop();
                if(i==n-1) 
                    return step; // reached to last index
                
                vector<int>& next=mp[arr[i]];
                next.push_back(i-1);
                next.push_back(i+1);
                for(auto j:next){
                    if(j>=0 && j<n && !vis[j]){
                        vis[j]=1;
                        q.push(j);
                    }
                }
                next.clear(); //avoid later lookup mp[arr[i]]
            }
            step++;
        }
        return 0;
    }
};