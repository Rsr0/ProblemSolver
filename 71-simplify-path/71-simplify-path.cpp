class Solution {
public:
    string simplifyPath(string path) {
        int n=path.size();
        vector<string> v;
        string ans="", s;
        stringstream ss(path);
        
        while(getline(ss,s,'/')){   // splitting string
            if(s=="." || s=="") continue;
            else if(s==".."){
                if(!v.empty())  v.pop_back(); //go to previous dir
             }
            else
                v.push_back(s);
        }
        
        for(auto s: v)
            ans+="/" + s;
       
        if(ans=="") ans="/";
        return ans;
        
    }
};