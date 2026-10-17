class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> mp;
        vector<vector<string>> res;
        for (int i = 0; i < strs.size(); i++) {
            string sorted_word = strs[i];
            sort(sorted_word.begin(), sorted_word.end());
            if (mp.contains(sorted_word))
                res[mp[sorted_word]].push_back(strs[i]);
            else {
                res.push_back({strs[i]});
                mp[sorted_word] = res.size()-1;
            }
        }
        return res;
    }
};