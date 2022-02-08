class Solution {
public:
    int addDigits(int num) {
   //O(1)   - digital root
        if(num==0) return 0;
        if(num % 9 == 0) return 9;
        return num % 9;
        
//         if(num>=0 && num<=9) return num;
        
//         int digit=0;
//         while(num!=0){
//             digit= digit + num%10;
//             num/=10;
//         }
        
//         num=digit;
//         return addDigits(num);
        
    }
};