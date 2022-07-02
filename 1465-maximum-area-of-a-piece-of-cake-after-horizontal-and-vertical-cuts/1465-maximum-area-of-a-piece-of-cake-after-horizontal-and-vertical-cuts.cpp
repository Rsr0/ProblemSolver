class Solution {
public:
    long long mod=1e9+7;
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        sort(hc.begin(), hc.end());
        hc.push_back(h);
        sort(vc.begin(), vc.end());
        vc.push_back(w);
        
        int mx1=hc[0], mx2=vc[0];
        for(int i=1;i<hc.size();i++)
            mx1=max(mx1, hc[i]-hc[i-1]);
        
        for(int i=1;i<vc.size();i++)
            mx2=max(mx2, vc[i]-vc[i-1]);
        
        return ((mx1)%mod * (mx2%mod)) %mod;
        
    }
};