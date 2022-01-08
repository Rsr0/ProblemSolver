class Solution {
public:
   
    int twoEggDrop(int n) {
        int res=1, pos=1;
        while(pos<n){
            res++;
            pos+=res;
        }
        return res;
    }
};