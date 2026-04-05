class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int index=-1;
        int i=0,j=matrix.size()*matrix[0].size()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            int r=mid/matrix[0].size(),
            c=mid%matrix[0].size();
            if(target>matrix[r][c])i=mid+1;
            else if(target<matrix[r][c])j=mid-1;
            else{
                index=mid;
                break;
            }

        }
        return index!=-1;
    }
};
