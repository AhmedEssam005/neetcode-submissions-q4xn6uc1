class Solution {
public:
    vector<vector<int>> res;
    void rec(const vector<int>&nums,vector<int>&curr,vector<bool>is,int index=0){
        if(index==nums.size()){
            res.push_back(curr);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(is[i]) continue;
            curr.push_back(nums[i]);
            is[i]=true;
            rec(nums,curr,is,index+1);
            is[i]=false;
            curr.pop_back();
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> is (nums.size(),false);
        vector<int> curr;
        rec(nums,curr,is);
        return res;
    }
};
