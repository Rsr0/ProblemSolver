class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> pv(26,0), sv(26,0), res; 
        int sn=s.size(), pn=p.size();
        if(sn<pn) return res;
        
        for(int i=0;i<pn;i++){
            pv[p[i]-'a']++;  // pattern vector
            sv[s[i]-'a']++;  //sliding vector
        }
        
        if(sv==pv)
            res.push_back(0);
        
        for(int i=pn;i<sn;i++){
            sv[s[i]-'a']++;
            sv[s[i-pn]-'a']--;
            
            if(sv==pv)
                res.push_back(i-pn+1);
        }
        return res;
    }
};