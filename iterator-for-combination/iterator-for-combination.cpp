class CombinationIterator {
public:
    vector<bool> v;
    string s;
    bool nextExist;
    
    CombinationIterator(string characters, int combinationLength) {
        s=characters;
        v.resize(s.length());
        
        for(int i=0;i<combinationLength;i++)
            v[i]=true;
        
        nextExist=s.length()>=combinationLength;
    }
    
    string next() {
        string res="";
        for(int i=0;i<v.size();i++){
            if(v[i])
                res+=s[i];
        }
        nextExist=prev_permutation(v.begin(), v.end());
        return res;
    }
    
    bool hasNext() {
        return nextExist;
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */