class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int sz=flowerbed.size();
        //edge cases
        
        if(n==0) return 1;
        if(sz==0) return 0;
        if(sz==1) return flowerbed[0]==0;
            
        int  cnt=0; //count continuous 0s
        for(int i=0;i<=sz;i++){
            if(i<sz && flowerbed[i]==0){
                cnt++;
                //[0] 1
                if(i==0 ) 
                    cnt++;
                if(i==sz-1)
                    cnt++;
            }
            else{
                n-=(cnt-1)/2;
                if(n<=0) return 1;
                cnt=0;
            }
        }
        return 0;
        
    }
};