class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = -11111;
        int curr = -11111;
        for(int i=0;i<nums.size();++i){
            curr = max(nums[i],curr+nums[i]);
            res = max(res,curr);
        }
        return res;
    }
};
