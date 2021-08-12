class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        int n=arr.size();
        map<int,int> mp;
        
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        
        int cnt=arr.size();
        
        auto it=mp.begin();
        while(it!=mp.end()){
            if(mp[it->first] > 0){
             if(it->first != 0 && mp[it->first * 2] > 0){
                 int x=min(mp[it->first], mp[it->first * 2]);
                 
                 cnt-=(x*2);
                 mp[it->first]-=x;
                 mp[it->first * 2]-=x;
             }
                
            // When val is 0, 0*2 is not possible
            else if(it->first==0){
                cnt-=mp[it->first];
                mp[it->first]=0;
            }
                
            }
        it++;
        }
                  
             return !cnt;    // cnt = 0     
    }
};