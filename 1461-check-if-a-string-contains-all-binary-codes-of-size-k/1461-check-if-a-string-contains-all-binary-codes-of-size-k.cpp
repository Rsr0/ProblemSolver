class Solution {
public:
    bool hasAllCodes(string s, int k) {
       int n=s.size();
        if(k>n)
            return false;
        
        unordered_set<string> st;
        for (int i = 0; i < n-k+1; i++){
            st.insert(s.substr(i, k));
            if(st.size()==pow(2,k))
                break;
        }
     
        return st.size()==pow(2,k);   

    }
};