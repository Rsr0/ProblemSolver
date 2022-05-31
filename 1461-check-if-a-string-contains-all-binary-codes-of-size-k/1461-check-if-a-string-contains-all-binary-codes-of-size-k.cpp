class Solution {
public:
    bool hasAllCodes(string s, int k) {
                if(k>s.size()){
            return false;
        }
        unordered_map<string,bool> check;
        
        for(int i=0;i<=s.size()-k;i++){
            check[s.substr(i,k)]=true;
            if(check.size()==pow(2,k)){
                return true;
            }
        }
        
        return check.size()==pow(2,k);   

    }
};