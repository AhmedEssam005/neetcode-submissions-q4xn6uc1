class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int left=target-nums[i];
            if(mp.contains(nums[i])) return {mp[nums[i]],i};
            mp[left]=i;
        }
        return {};
    }
};
