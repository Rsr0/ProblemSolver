class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        unordered_set<string> dict(wordList.begin(), wordList.end());
        if(dict.find(endWord)==dict.end())  // end word not present 
            return 0;
        
        queue<string> todo;  
        todo.push(beginWord);
        
        int ladder=1 ; // depth
        
        while(!todo.empty()){
            int n=todo.size();
            
            for(int i=0;i<n;i++){
                string word=todo.front();
                todo.pop();
                
                if(word==endWord)
                    return ladder;
                
                dict.erase(word);
                
                for(int j=0;j<word.size();j++){
                    char c=word[j];
                    
                    // try bruteforce on jth character with 26 characters
                    for(int k=0;k<26;k++){   // hot -> hit   
                        word[j]='a'+k; // updating
                        
                        if(word[j]==c) continue;
                        if(dict.find(word)!=dict.end()){
                            todo.push(word);
                            dict.erase(word);
                        }
                    }
                    word[j]=c;
             }
        }
            ladder++;
        }
        return 0;
    }
};