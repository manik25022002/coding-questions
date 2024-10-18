/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        if( guess(n)==0 )return n;
        int s=0;
        int e=n-1;
        int ans;
        while(s<=e){
            int mid=s+ (e-s)/2;
            int val=guess(mid);

            if(val==0){
                ans=mid;
                return ans;
            }

            else if(val== -1){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};