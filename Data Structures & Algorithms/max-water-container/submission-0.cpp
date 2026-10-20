class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxwater = 0;
        for(int i=0;i<heights.size();++i){
            int water = 0;
            for(int j=i+1;j<heights.size();++j){
                int length = min(heights[i],heights[j]);
                int breadth = j-i;
                water = length*breadth;
            }
            maxwater = max(maxwater,water);
        }
        return maxwater;
    }
};
