class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int flip=0,cnt=0;
        for(auto i:s){
            if(i=='0')
                flip++;
            else cnt++;
            
            flip=min(flip,cnt);
        }
        return flip;
    }
};  