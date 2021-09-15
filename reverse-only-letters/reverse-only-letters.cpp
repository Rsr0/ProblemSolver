class Solution {
public:
    string reverseOnlyLetters(string s) {
                int l=0, r=s.length()-1;
        while(l<=r){
            if((s[l]>='a' && s[l]<='z') || (s[l]>='A' && s[l]<='Z') ){
                if((s[r]>='a' && s[r]<='z') || (s[r]>='A' && s[r]<='Z')){
                    swap(s[l],s[r]);
                    l++;  r--;
                }
                else r--;
            
            }
             else if((s[r]>='a' && s[r]<='z') || (s[r]>='A' && s[r]<='Z'))
                 l++;
            else {
                l++; r--;
            }
           
            // cout<<s<<endl;
        }
        return s;
    }
};