class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();++i){
            int num1 = nums[i];
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l = i+1;
            int j = nums.size()-1;
            while(l<j){
                int tot = num1+nums[l]+nums[j];
                if(tot==0){
                    res.push_back({num1,nums[l],nums[j]});
                    l++;
                    j--;
                    while(l<j && nums[l]==nums[l-1]) l++;
                    while(l<j && nums[j]==nums[j+1]) j--;
                }
                else if(tot>0) j--;
                else l++;
            }
        }
        return res;
    }
};
