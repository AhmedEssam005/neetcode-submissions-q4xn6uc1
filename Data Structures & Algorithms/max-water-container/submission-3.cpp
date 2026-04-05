class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxarea=0;
        int left=0;
        int right=heights.size()-1;
        while(left<right){
            int temp=(right-left)*(min(heights[left],heights[right]));
            maxarea=max(maxarea,temp);
            if(heights[left]<heights[right]){
                left++;
            }
            else right--;
        }
        return maxarea;
    }
};
