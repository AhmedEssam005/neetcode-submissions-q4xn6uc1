#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int,int> map;
        bool found =false;
        for(int i=0;i<nums.size();i++)
        {
            if(map.find(nums[i])!=map.end() && map[nums[i]]==1)
            {
                found=true;
                break;
            }
            else
            {
                map[nums[i]]=1;
            }
        }
        return found;
    }
};