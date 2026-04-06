class Solution {
public:
    vector<vector<int>> res;
    void rec(const vector<int>& nums,vector<int>&v,int target,int index=0){
        if(target<0) return;
        if(!target){
            res.push_back(v);
            return;
        }
        for(int i=index;i<nums.size();i++){
            v.push_back(nums[i]);
            rec(nums,v,target-nums[i],i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> v;
        rec(nums,v,target);
        return res;
    }
};
