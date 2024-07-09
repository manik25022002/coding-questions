class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l=0;
        int n=cardPoints.size();
        int left_sum=0;
        for(int i=0;i<k;i++){
            left_sum+=cardPoints[i];
        }
        int maxsum=left_sum;
        int r=n-1;
        int right_sum=0;
        for(int i=k-1;i>=0;i--){
            left_sum=left_sum-cardPoints[i];
            right_sum=right_sum+cardPoints[r];
            r=r-1;
 maxsum=max(maxsum,(left_sum+right_sum));
        }
       
        return maxsum;
    }
};