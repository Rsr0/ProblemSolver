class Solution {
public:
    int romanToInt(string s) {
        int roman[100];
        roman['I']=1;
        roman['V']=5;
        roman['X']=10;
        roman['L']=50;
        roman['C']=100;
        roman['D']=500;
        roman['M']=1000;
    
        
        int prev=0,res=0,val;
        for(auto i:s){
            val=roman[i];
            res+=val;
            if(prev<val){
                res-=2*prev;
            }
            prev=val;
            
            
        }            
            
        // int res=0;
//         for(int i=0;i<s.size();i++){
            
//             if(s[i]=='I'){
//                   if(s[i+1]=='V' || s[i+1]=='X')  res-=1;
//                   else res+=1;
//             }
            
//             else if(s[i]=='V')   res+=5;
            
//             else if(s[i]=='X'){
//                  if(s[i+1]=='L' || s[i+1]=='C')   res-=10;
//                  else   res+=10;
//             }
            
//             else if(s[i]=='L')   res+=50;
            
            
//             else if(s[i]=='C'){
//                  if(s[i+1]=='D' || s[i+1]=='M')    res-=100;
//                  else  res+=100;
//             }
            
//             else if(s[i]=='D')  res+=500;
        
//             else if(s[i]=='M')  res+=1000;
            
//         }
        
        return res;
    }
};