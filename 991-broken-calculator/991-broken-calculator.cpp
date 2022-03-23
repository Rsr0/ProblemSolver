class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int res=0;
        
        while(target > startValue){
            if(target%2)
                target++;
            else
                target/=2;
            res++;
        }
        
        if(target<=startValue)
            res+=startValue-target;
        
        return res;
    }
};