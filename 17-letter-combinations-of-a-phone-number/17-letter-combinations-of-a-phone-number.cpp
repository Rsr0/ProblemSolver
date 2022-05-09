class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty())  return {};
        vector<string> mp = {"","","abc","def","ghi", "jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans(1,"");
        
        for(auto it:digits){
            string letters=mp[it-'0'];
            vector<string> v;
            for(auto l:letters){
                for(auto c:ans)
                    v.push_back(c+l);
                
            }
            swap(ans, v);
        }
        return ans;
    }
};