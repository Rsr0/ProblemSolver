class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int n=word.size();
        if(n==1) return 1;
        
        for(int i=1;i<n;i++){
            if(isupper(word[1])!=isupper(word[i]) || islower(word[0]) && isupper(word[i]))
                return 0;
        }
        return 1;
        
    }
};