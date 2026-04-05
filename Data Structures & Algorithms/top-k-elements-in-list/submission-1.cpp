class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int , int> mp;
        for(int a : nums){
            if(mp.find(a)!=mp.end()){
                mp[a]+=1;
            }
            else{
                mp.insert({a,1});
            }
        }
        vector<pair<int,int>> v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            return a.second > b.second;
        });
        vector <int> res(k);
        for(int i=0;i<k;i++){
            res[i]=v[i].first;
        }
        return res;

    }
};
