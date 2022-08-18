class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto i:arr)
            mp[i]++;
        priority_queue<pair<int,int>>pq;
        for(auto i:mp){
            pq.push({i.second, i.first});
        }
        int cnt=0,size=0;
        while(size<arr.size()/2 && !pq.empty()){
            size+=pq.top().first;
            cnt++;
            pq.pop();
        }
        return cnt ;
    }
};