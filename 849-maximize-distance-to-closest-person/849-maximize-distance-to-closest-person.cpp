class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size();
        if(n==2) return 1;
        
        int ans=0, cnt=0;
        bool flag=0;
        for(int i=0;i<n;i++){
            if(seats[i]==0)
                cnt++;
            else{
                if(flag==0) // starting 0s
                    ans=max(ans, cnt);
                else   // in between 0s
                    ans=max(ans, (cnt+1)/2);
                
                flag=1;
                cnt=0;
            }
        }
    
        if(cnt>0) // ending 0s
            ans=max(ans, cnt);
        
        return ans;
    }
};