class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int n=moves.size();
        int r=0,c=0,d1=0,d2=0;
        
        for(int i=(n-1)%2;i<n;i+=2){    // (n-1)%2 -> Last turn by A or B
            if(moves[i][0]==moves[i][1]) d1++;
            if(moves[i][0]+moves[i][1]==2) d2++;
            if(moves[i][0]==moves[n-1][0]) r++;
            if(moves[i][1]==moves[n-1][1]) c++;
        }
        
  
        if(c==3 || r==3 || d1==3 || d2==3){
            if(n%2==1)  return "A";
            return "B";
        }
        
        if(n==9) return "Draw";
        else
            return "Pending";
            
    }
};