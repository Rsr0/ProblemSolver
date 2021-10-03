class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<bool> allowed(n,0);
        allowed[0]=1;
        
        for(int i=0;i<n;i++){
            if(allowed[i]){
                for(int j=min(i+nums[i], n-1);j>i;j--){   // at max j=n-1
                    if(allowed[j]) break;
                    allowed[j]=1;
                }
            }
        }
        return allowed[n-1];
    }
};

/*e.g
    ----5--------
        ixxxxx  //allowed steps
    ----1---11---    // mark 1 if available
           0 stop when zero comes 
*/