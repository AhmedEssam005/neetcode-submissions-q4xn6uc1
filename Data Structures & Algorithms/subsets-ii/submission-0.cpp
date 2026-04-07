class Solution {
public:
    vector<vector<int>> res;
    void rec(const vector<int>& nums,vector<int>&curr,int index=0){
        res.push_back(curr);
        for(int i = index; i < nums.size(); i++){
            if(i>index&&nums[i]==nums[i-1]) continue;
            curr.push_back(nums[i]);
            rec(nums, curr, i+1);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>curr;
        sort(nums.begin(),nums.end());
        rec(nums,curr);
        return res;
    }
};
