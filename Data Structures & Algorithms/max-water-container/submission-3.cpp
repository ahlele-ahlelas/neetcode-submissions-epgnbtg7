class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0,right = heights.size()-1;
        int netwater = 0;
        while(left<=right){
            int water = min(heights[left],heights[right])*(right-left);
            if(heights[left]>heights[right]) right--;
            else left++;
            netwater = max(water,netwater);
        }
        return netwater;
    }
};
