class Solution {
public:
bool solve(int x){
    if(x==1)return true;
    if(x%3!=0)return false;
    else{
        x=x/3;
        return solve(x);
    }
}
    bool isPowerOfThree(int n) {
        if(n<1)return false;
        int ans =solve(n);
        return ans;
    }
};