class Solution {
public:
    vector<vector<int>> res;
    void rec(const vector<int>& nums,vector<int>&v,int target,int sum=0,int index=0){
      if(sum>target) return;
      if(target==sum){
        res.push_back(v);
        return;
      }
      for(int i=index;i<nums.size();i++){
        v.push_back(nums[i]);
        rec(nums,v,target,sum+nums[i],i);
        v.pop_back();
      }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> v;
        rec(nums,v,target);
        return res;
    }
};
