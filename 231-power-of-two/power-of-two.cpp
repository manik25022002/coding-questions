class Solution {
public:

bool solve(int x){
    if(x==1)return true;

    if(x%2!=0)return false;
    else{
        x=x/2;
        return solve(x);
    }
    
}


    bool isPowerOfTwo(int n) {
        if(n==0)return false;
        int ans=solve(n);
        return ans;
    }
};