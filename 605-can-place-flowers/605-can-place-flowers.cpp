class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int sz=flowerbed.size(), cnt=0; //count continuous 0s
        
        if(sz)
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