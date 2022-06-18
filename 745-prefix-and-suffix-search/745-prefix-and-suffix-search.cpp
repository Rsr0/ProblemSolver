
class TrieNode{
    public:
    vector<TrieNode*>children;
    unordered_map<string, int>dict;
    char val;
    TrieNode(char c):children(26, NULL), val(c){};
};

class WordFilter {
    TrieNode*root = new TrieNode('a');
    void addWord(const string& s, int i){
        auto it = root;
        for(const auto&c:s){
            if(!it->children[c-'a'])
                it->children[c-'a'] = new TrieNode(c);
            it = it->children[c-'a'];
            it->dict[s] = i;
        }
    }
public:
    WordFilter(vector<string>& words) {
        for(int i = 0;i<words.size();i++){
            addWord(words[i], i);
        }
    }
    
    int f(string prefix, string suffix) {
        int ret = -1;
        auto it = root;
        for(const auto&c:prefix){
            if(!it->children[c-'a'])
                return -1;
            it = it->children[c-'a'];
        }
        for(auto const&[w, i]:it->dict){
            if(w.size() >= suffix.size() && w.substr(w.size()-suffix.size(), suffix.size()) == suffix){
                    ret = max(ret, i);
            }
                
        }
        return ret;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */