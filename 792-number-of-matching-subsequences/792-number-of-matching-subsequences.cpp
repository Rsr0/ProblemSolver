class Solution {
public:

    
    int numMatchingSubseq(string s, vector<string>& words) {
        int count=0;
        unordered_map<string,int> mp; 
        
        for(int i=0;i<words.size();i++)
            mp[words[i]]++;
        
        for(auto x:mp){
            int i=0, j=0;
            while(i<s.size() && j<x.first.size()){
                if(s[i]==x.first[j])
                    j++;
                i++;
            }
            if(j==x.first.size()) 
                count+=x.second; //****
        }
        
        return count;
    }
};

/*
"qlhxagxdqh"
["qlhxagxdq","qlhxagxdq","lhyiftwtut","yfzwraahab"]

mp["qlhxagxdq"]=2;    -> count+=x.second

*/