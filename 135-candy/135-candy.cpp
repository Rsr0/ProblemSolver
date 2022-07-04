class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        int ans=1;
        
       int up=0, down=0, peak=0;
        
        for(int i=1;i<n;i++){
            if(ratings[i]> ratings[i-1]){
              peak=++up;
                down=0;
                ans+=up+1;
            }
            else if(ratings[i]==ratings[i-1]){
                peak=up=down=0;
                ans+=1;
            }
            else{
                down++;
                up=0;
                ans+=down;
                if(down>peak)
                    ans+=1;
            }
        }
        
        return ans;
    }
};