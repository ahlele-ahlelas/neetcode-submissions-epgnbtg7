class Solution {
public:
    int get(vector<int>& nums,int idx,int n){
        if(idx>=n) return 0;
        int take = nums[idx]+get(nums,idx+2,n);
        int skip = get(nums,idx+1,n);
        return max(take,skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        return get(nums,0,n);
        // if(n==1) return nums[0];
        // vector<int> dp(n+1);
        // dp[0] = 
    }
};
