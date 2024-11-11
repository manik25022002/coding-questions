class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e=x;
       int ans=-1;
        while(s<=e){
            long long mid = s+(e-s)/2;
             long long  val= mid*mid;
            if(val==x)return mid;
            else if(val>x){
                e=mid-1;
            }
            else{
                ans=mid;
                s=mid+1;
            }
        }
        return ans;
    }
};