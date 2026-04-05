
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        vector<vector<string>> rs;
        unordered_map <string,vector<string>> count;
        for(int i =0;i<strs.size();i++)
        {
            string copy=strs[i];
            sort(copy.begin(),copy.end());

                count[copy].push_back(strs[i]);
            
        }
        for(auto&f : count){
            rs.push_back(f.second);
        }
        return rs;
    }
};
