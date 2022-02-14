class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
     
        unordered_map<int,int> even, odd;
       int e1, e2, cnt_e1=0, cnt_e2=0;
        int o1, o2, cnt_o1=0,cnt_o2=0; 
        for(int i=0;i<n;i++){
            if(i%2==0){
                 int x = ++even[nums[i]];
                  if(x>cnt_e1){
                      cnt_e1=x;
                      e1=nums[i];
                  }
                else if(x>cnt_e2){
                    cnt_e2=x;
                      e2=nums[i];
                }
            }
            else{
               int x = ++odd[nums[i]];
               if(x>cnt_o1){
                      cnt_o1=x;
                      o1=nums[i];
                  }
                else if(x>cnt_o2){
                    cnt_o2=x;
                      o2=nums[i];
                }     
            }
        }
    
        if(e1!=o1) 
            return n - cnt_e1 - cnt_o1;

        return min(n-cnt_e2-cnt_o1, n-cnt_e1-cnt_o2);
    }
};