class Solution {
public:
    bool canJump(vector<int>& nums) {
       int n=nums.size();
        int last=n-1, i;
        for(i=n-2;i>=0;i--){
            if(i+nums[i] >= last)
                last=i;
        }
        return last<=0;
    }
};

/*e.g
    ----5--------
        ixxxxx  //allowed steps
    ----1---11---    // mark 1 if available
           0 stop when zero comes 
*/

/*
 int n = nums.size();
        int i=0;
        for(int jump=0;i<n && i<=jump ;i++){
            jump=max(i+nums[i], jump);
        }
        return (i==n); // reached end
*/