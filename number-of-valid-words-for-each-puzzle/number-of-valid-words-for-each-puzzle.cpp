class Solution {
public:
    int bitMask(string word){
        int mask=0;
        for(auto ch: word)
            mask|=(1 << ch-'a');
        return mask;
    }
    
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        unordered_map<int,int> mp;
        for(auto w:words)
            mp[bitMask(w)]++;
        
        vector<int> res;
        for(auto p:puzzles){
            int mask=bitMask(p);
            int submask=mask, first=(1<< p[0]-'a'), curr=0;
            
            while(submask){
                if(submask & first)
                    curr+=mp[submask];
                 submask=(submask-1) & mask;
            }
            res.push_back(curr);
        }
        return res;
    }
};