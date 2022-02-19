class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX, ans=INT_MAX;
        priority_queue<int> pq;
        
        for(auto it:nums){
            if(it & 1){  //odd
                pq.push(it*2);
                mini=min(mini, it*2);
            }
            else{
                pq.push(it);
                mini=min(mini, it);
            }
        }
        
        while(!pq.empty()){
            int num=pq.top();
            pq.pop();
            ans=min(ans, num-mini);
            if(num & 1) //odd
                break;
            else{
                pq.push(num/2); // even
                mini=min(mini, num/2);
            }
        }
      return ans;           
    }
};