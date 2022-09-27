class Solution {
public:
    string pushDominoes(string dominoes) {
        int n=dominoes.size();
        int l=0, r;
        for(r=0;r<n;r++){
            if(dominoes[r]=='.')    continue;
            
            if(dominoes[r]==dominoes[l] || (dominoes[l]=='.' && dominoes[r]=='L')){
            /*
                L....L -> LLLLLL
                R....R -> RRRRRR
            */
                for(int k=l;k<r;k++)
                    dominoes[k]=dominoes[r];
            }
            
            else if(dominoes[r]=='R' && dominoes[l]=='L'){}   // L.....R
            else if(dominoes[r]=='L' && dominoes[l]=='R'){    // R...L -> RR.LL 
                    int mid=(r-l-1)/2;                        // R....L -> RRRLLL
                    for(int k=1;k<=mid;k++){
                        dominoes[l+k]='R';
                        dominoes[r-k]='L';
                     }
              }
                l=r;
          }
        
        if(dominoes[l]=='R') //LL.R. -> LL.RR
        {
            for(int k=l;k<n;k++){
                dominoes[k]='R';
            }    
        }
        return dominoes;
    }
};