class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res;
        vector<int> last_pos(26);
        
        for(int i=0;i<s.size();i++)
            last_pos[s[i]-'a']=i;
        
        int cut=INT_MIN, prev=0;
        for(int i=0;i<s.size();i++){
            cut=max(cut, last_pos[s[i]-'a']);
            if(cut==i){
                res.push_back(cut-prev+1);
                prev=i+1;
            }
        }
        return res;
    }
};