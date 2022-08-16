class Solution {
public:
    int firstUniqChar(string s) {
    
        int m[256]={};  
        for(int i=0;i<s.size();i++)
            m[s[i]]++;
        
        for(int i=0;i<s.size();i++){
            if(m[s[i]]==1)
                return i;
            
        }
        return -1;
        
        
    }
};