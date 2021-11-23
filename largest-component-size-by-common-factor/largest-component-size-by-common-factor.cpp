class Solution {
public:
  
    vector<int> par;
    vector<int> sz;
  
    int parent(int i){
        return par[i]==i ? i : par[i]=parent(par[i]);
    }
    
    void join(int i, int j){
        int u=parent(i);
        int v=parent(j);
        if(u!=v){
            if(sz[v]>=sz[u]){
                par[u]=v;
                sz[v]+=sz[u];
            }
            else{
                   par[v]=u;
                sz[u]+=sz[v];
            }
        }
        
    }
    
    int largestComponentSize(vector<int>& nums) {
        int n=*max_element(nums.begin(),nums.end());
        
        for(int i=0;i<=n;i++){
            par.push_back(i);
            sz.push_back(1);
         }
        
        for(int i=0;i<nums.size();i++){
             for(int j=2;j*j<=nums[i];j++){
                  if(nums[i]%j==0){
                       join(nums[i],j);
                       join(nums[i],nums[i]/j);
                  }
             }
       }
        
        unordered_map<int,int> mp;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int sz = ++mp[parent(nums[i])];
            ans = max(ans,sz);
        }
    return ans;   
    }
};