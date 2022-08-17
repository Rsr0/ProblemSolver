class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string mp[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_set<string> st;
        for(int i=0;i<words.size();i++){
            string t="";
            for(auto c:words[i]){
                t+=mp[c-'a'];
            }
            st.insert(t);
        }
       return st.size();
    }
};