
class Solution {
public:
    int sumofsquares(int n){
          int num=0;
            while(n){
                num+= (n%10)*(n%10);
                n=n/10;  
            }
            return num;
    }
    
    bool isHappy(int n) {
        unordered_set<int> s;       
        while(n!=1){               
             n = sumofsquares(n);
            if(s.count(n)) break;
            s.insert(n);           
        }
        return n==1; 
    }
};