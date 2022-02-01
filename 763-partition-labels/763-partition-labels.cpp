class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res;
        vector<int> pos(26,0);
        
        for(int i=0;i<s.size();i++)
            pos[s[i]-'a']=i;
        
        
        int idx=INT_MIN, prev=0;
        for(int i=0;i<s.size();i++){
            idx=max(idx, pos[s[i]-'a']);
            if(idx==i){
                res.push_back(idx-prev+1);
                prev=i+1;
            }
        }
        return res;
    }
};