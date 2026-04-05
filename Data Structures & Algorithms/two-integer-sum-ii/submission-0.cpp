class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> pairIndex;
        unordered_map <int , int> mp;

        for(int i=0;i<numbers.size();i++){
            int tar = target-numbers[i] ;
            if(mp.find(tar) != mp.end()){
                pairIndex.push_back(mp[tar]+1);
                pairIndex.push_back(i+1);
            }
            else mp.insert({numbers[i],i});
        }   
        return pairIndex;
    }
};
