class Solution {
public:
    int thirdMax(vector<int>& nums) {
       set<int>st;
       vector<int>temp;
       for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);
       }
      for(auto it:st){
        temp.push_back(it);
      }
      sort(temp.rbegin(),temp.rend());

      if(temp.size()<=2)return temp[0];
      else return temp[2];
    }
};