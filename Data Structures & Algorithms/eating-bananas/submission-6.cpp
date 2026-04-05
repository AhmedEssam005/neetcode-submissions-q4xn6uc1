class Solution {
public:

    bool can(const vector<int>& piles, int h,int k){
        long long hrs=0;
        for(int n:piles){   
            hrs+=ceil(double(n)/k);
        }
        return hrs<=h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1,j=1e9;
        int res=INT_MAX;
        while(i<=j){
            int mid =(i+j)/2;
            if(can(piles,h,mid)){
                j=mid-1;
                res=min(res,mid);
            } 
            else i=mid+1;
        }
        return res;
    }
};
