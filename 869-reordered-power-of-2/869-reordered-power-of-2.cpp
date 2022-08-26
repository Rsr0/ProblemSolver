class Solution {
public:
    
    vector<int> solve(int n){
        vector<int> freq(10);
        while(n){
            freq[n%10]++;
            n/=10;
        }
        return freq;
    }
    
    bool reorderedPowerOf2(int n) {
        if(n==1) return 1;
        
        vector<int> v=solve(n);
        for(int i=0;i<31;i++){
            if(v==solve(1<<i)){
                return 1;
            }
        }
        return 0;
        
    }
};