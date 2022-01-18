class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int sz=flowerbed.size();
        //edge cases
        
        if(n==0) return 1;
        if(sz==0) return 0;
        if(sz==1) return flowerbed[0]==0;
            
        // add 0s on start and end
        flowerbed.push_back(0);
        flowerbed.insert(flowerbed.begin(),0);
        sz+=2;
        int i=1, cnt=0;
        
        // check if there are 3 0s in row
        while(i<sz-1 && cnt<n){
            if(flowerbed[i-1]==0 && flowerbed[i]==0 && flowerbed[i+1]==0){
                cnt++;
                flowerbed[i]=1;
            }
            i++;
        }
        return cnt==n;
    }
};