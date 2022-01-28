class WordDictionary {
public:
    unordered_map<int, vector<string>> mp;
    
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        mp[word.length()].push_back(word);
    }
    
    bool isSame(string a, string b){
        for(int i=0;i<a.length();i++){
            if(b[i]=='.')   continue;
            if(b[i]!=a[i]) return 0;
        }    
        return 1;
    }
    
    bool search(string word) {
        int n=word.length();
        for(int i=0;i<mp[n].size();i++){
            string s=mp[n][i];
            if(isSame(s, word))
                return 1;
        }
        return 0;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */