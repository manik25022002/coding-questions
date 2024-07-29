class Solution {
public:
bool solve(int x){
    if(x==1) return true;
    if(x%4!=0)return false;
    else{
        x=x/4;
        return solve(x);
    }
}
    bool isPowerOfFour(int n) {
        if(n<4 && n!=1) return false;
        int ans= solve(n);
        return ans;
    }
};