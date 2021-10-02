class Solution {
public:
    
    class ele{
        public:
        int val;
        int idx;
        int row;
        int size;
        
        ele(int v,int i, int r, int s){
            val=v;
            idx=i;
            row=r;
            size=s;
        }  
    };
    struct comp{
        bool operator()(ele a, ele  b){
            return a.val > b.val;
        }
    };
    
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int mn=INT_MAX,mx=INT_MIN,range=INT_MAX;
        
        priority_queue<ele, vector<ele>, comp> pq;
        int k=nums.size();
        int low, high;
        
        for(int i=0;i<k;i++){
            pq.push(ele(nums[i][0],0,i,nums[i].size()));
            mn=min(mn, nums[i][0]);
            mx=max(mx, nums[i][0]);
        }
        
        while(!pq.empty()){
            ele temp=pq.top();
            pq.pop();
            
            int curr_min=temp.val;
            if(range > mx-curr_min){
                mn=curr_min;
                range=mx-mn;
                low=mn;
                high=mx;
            }
            
            if(temp.idx==temp.size-1)
                break;
            
            temp.idx+=1;
            pq.push(ele(nums[temp.row][temp.idx], temp.idx, temp.row, nums[temp.row].size()));
            mx=max(mx,nums[temp.row][temp.idx]);
            
        }
        return {low,high};
    
    }
};