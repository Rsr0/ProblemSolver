class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int sz=flowerbed.size();
        //edge cases
        
        if(n==0) return 1;
        if(sz==0) return 0;
        if(sz==1) return flowerbed[0]==0;
            
       int cnt=0;
        for(int i=0;i<sz;i++){
            if(flowerbed[i]==0 && (i==0 || flowerbed[i-1]==0) && (i==sz-1 || flowerbed[i+1]==0)){
                cnt++;
                flowerbed[i]=1;
            }
            if(cnt>=n)
                return 1;
        }
        return 0;
    }
};