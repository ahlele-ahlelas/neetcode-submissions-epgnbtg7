class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        vector<int> nums1(nums.begin(),nums.end()-1);
        vector<int> nums2(nums.begin()+1,nums.end());
        vector<int> dp1(nums1.size());
        vector<int> dp2(nums2.size());
        dp1[0] = nums1[0];
        dp2[0] = nums2[0];
        if(nums1.size()>1) dp1[1] = max(nums1[0],nums1[1]);
        if(nums2.size()>1) dp2[1] = max(nums2[0],nums2[1]);
        for(int i=2;i<nums1.size();++i){
            int take = nums1[i]+dp1[i-2];
            int skip = dp1[i-1];
            dp1[i] = max(take,skip);
        }
        for(int i=2;i<nums2.size();++i){
            int take = nums2[i]+dp2[i-2];
            int skip = dp2[i-1];
            dp2[i] = max(take,skip);
        }
        return max(dp1[nums1.size()-1],dp2[nums2.size()-1]);
    }
};
