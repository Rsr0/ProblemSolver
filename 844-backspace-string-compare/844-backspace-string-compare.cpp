class Solution {
public:

    string solve(string s){
        string res="";
        for(auto it:s){
            if(it=='#'){
                if(!res.empty())
                    res.pop_back();
            }
            else
                res+=it;
        }
     
        return res;
    }
    bool backspaceCompare(string s, string t) {
         s=solve(s);
        t=solve(t);
        return s==t;
        
    }
};