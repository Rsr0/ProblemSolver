class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        
        for(int i=0;i<n;i++){
            pq.push({abs(arr[i]-x), i});
        }
        
        vector<int> ans;
        while(!pq.empty() && k--){
            auto p=pq.top();
            pq.pop();
            ans.push_back(arr[p.second]);
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};