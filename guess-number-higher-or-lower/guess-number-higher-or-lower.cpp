/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int lo=1, hi=n;
        int mid;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            int pick=guess(mid);
            if(pick==0)
                return mid;
            else if(pick==1)
                lo=mid+1;
            else
                hi=mid-1;
        }
       return -1;
    }
};