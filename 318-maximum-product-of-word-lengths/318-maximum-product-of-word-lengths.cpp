class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n=words.size();
        int ans=0;
        vector<int> v;
        for(auto w:words){
            int mask=0;
            for(auto ch:w)
                mask|=1<<(ch-'a');
            
            v.push_back(mask);
        }
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((v[i] & v[j])==0){  // no common letter
                    int len = words[i].size() * words[j].size();
                    ans=max(ans,len);
                }
            }
        }
        return ans;
    }
};