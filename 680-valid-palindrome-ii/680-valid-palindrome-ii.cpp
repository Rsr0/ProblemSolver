class Solution {
public:
    
    bool isPal(string s, int low, int high){
        while(low<=high){
            if(s[low]!=s[high])
                return 0;
            low++, high--;
        }
        return 1;
    }
    
    bool validPalindrome(string s) {
        int  i=0, j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j])
                return isPal(s,i+1,j) || isPal(s,i,j-1);

            i++, j--;
        }
        return 1;
    }
};