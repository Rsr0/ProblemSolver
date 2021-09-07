class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
         int n=releaseTimes.size();
        int diff;
        diff=releaseTimes[0];
        char s=keysPressed[0];
        for(int i=1;i<n;i++){
            if(releaseTimes[i]-releaseTimes[i-1]>diff){
                diff=releaseTimes[i]-releaseTimes[i-1];
               s=keysPressed[i];
            }
            if(releaseTimes[i]-releaseTimes[i-1]==diff)
                s=max(s,keysPressed[i]);
            

        }
        return s;
    }
};