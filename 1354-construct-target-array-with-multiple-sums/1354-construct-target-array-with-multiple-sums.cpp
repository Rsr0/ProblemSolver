class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int> pq;
        long long sum=0;
        for(auto i:target){
            sum+=i;
            pq.push(i);
        }
        while(pq.top()!=1){
            int mx=pq.top();
            pq.pop();
            sum-=mx;
            if(sum==1) return 1;
            if(sum>=mx || sum==0) return 0;
            
         
            long long rem=(mx-sum)%sum;
            if(rem==0)  return 0;
            
            pq.push(rem);
            sum+=rem;
        }
        return 1;
    }
};