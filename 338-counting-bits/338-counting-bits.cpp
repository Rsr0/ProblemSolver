class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        
        for(int i=0;i<=n;i++){
        int count=0;
            int k=i;
        while(k>0){
            k = k & (k-1) ;  // 9&8  ->  1001 & 1000 -> 1000 = 8
            // k = k>>1;        
                count++;
        }         
        ans.push_back(count);
        
    }
     return ans;   
    }
};