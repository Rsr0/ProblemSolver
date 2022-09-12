class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int res=0;
        sort(tokens.begin(), tokens.end());
        int i=0, j=tokens.size()-1;
        int score=0;
        while(i<=j){
            if(power>=tokens[i]){
                power-=tokens[i++];
                score++;
                res=max(res,score);
            }
            else if(score>0){
                power+=tokens[j--];
                score--;
            }
            else
                break;
        }
        return res;
    }
};