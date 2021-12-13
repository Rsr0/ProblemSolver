class Solution {
public:
    int maxPower(string s) {
        int pow=0;
        for(int i=0;i<s.size();i++){
            int count=1;
            while(i<s.size() && s[i]==s[i+1])
            { count++;
                i++;
            }
            pow=max(pow,count);
        }
        return pow;
    }
};