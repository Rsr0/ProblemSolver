class Solution {
public:
    int maxNumberOfBalloons(string text) {
                unordered_map<int,int> mp;
        // string s="balloon"
        for(int i=0;i<text.length();i++){
            mp[text[i]-'a']++;
        }
        
        int ans;
        ans=min({mp[1],mp[0],(mp[11]/2),(mp[14]/2),mp[13]});
            
            return ans;
    }
};