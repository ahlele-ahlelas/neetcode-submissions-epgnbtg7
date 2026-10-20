class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        n = len(nums)
        sum = n*(n+1)/2
        r_sum = 0
        for i in nums:
            r_sum+=i
        if (sum-r_sum)==0:
            return False
        return True

        