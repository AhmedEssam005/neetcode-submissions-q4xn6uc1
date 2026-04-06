class Solution {
public:
    vector<vector<int>> res;
    void rec(const vector<int>& nums,vector<int>v,int index=0){
        if(index==nums.size()){
            res.push_back(v);
            return;
        }
        v.push_back(nums[index]);
        rec(nums,v,index+1);
        v.pop_back();
        rec(nums,v,index+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>v;
        rec(nums,v);
        return res;
    }
};
