class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size(), n2=s2.size();
        if(n1>n2) return 0;
        
        vector<int> v1(26,0), v2(26,0);
        for(int i=0;i<n1;i++){
            v1[s1[i]-'a']++;
            v2[s2[i]-'a']++;
        }
        
        if(v1==v2) return 1;
        for(int i=n1;i<n2;i++){
            v2[s2[i]-'a']++;
            v2[s2[i-n1]-'a']--;
            if(v1==v2)  return 1;
        }
        return 0;
    }
};