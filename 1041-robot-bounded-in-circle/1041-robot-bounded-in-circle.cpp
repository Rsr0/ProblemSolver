class Solution {
public:
    bool isRobotBounded(string instructions) {
        // direction-  0: UP, 1: L, 2: Down, 3: R
        int x=0, y=0, d=0;
        for(auto i:instructions){
            if(i=='L')
                d=(4 + d+1)%4;
            else if(i=='R')
                d=(4 + d-1)%4;
            else{
                if(d==0)    y++;
                else if(d==1) x--;
                else if(d==2) y--; 
                else x++;
            }
        }
        
        if(d!=0 || (x==0 && y==0)) //form circle if change in direction  or zero displacement
            return 1;
        return 0;
    }
};