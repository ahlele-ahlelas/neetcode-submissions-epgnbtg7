class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int j = heights.size()-1;
        int max_water = 0;
        while(l<j){
            int ht = min(heights[l],heights[j]);
            max_water = max(max_water,ht*(j-l));
            if(heights[l]<heights[j]) l++;
            else j--;
        }
        return max_water;
    }
};
