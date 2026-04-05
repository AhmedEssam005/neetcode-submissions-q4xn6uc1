class Solution {
public:
    int findMin(vector<int> &nums) {
        int j=nums.size()-1,i=0;
        int res=nums[0];
        while(i<=j){
            if(nums[i]<nums[j]) return nums[i];
            int mid=(i+j)/2;
            res=min(nums[mid],res);
            if(nums[mid]>=nums[i]) i=mid+1;
            else j=j-1;
        }
        return res;
    }
};