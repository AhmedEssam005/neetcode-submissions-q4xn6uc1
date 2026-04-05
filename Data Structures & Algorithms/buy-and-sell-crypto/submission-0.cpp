class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int sell=prices[prices.size()-1];
        for(int i=prices.size()-2;i>=0;i--){
            res=max(res,sell-prices[i]);
            sell=max(sell,prices[i]);
        }
        return res;
    }
};
