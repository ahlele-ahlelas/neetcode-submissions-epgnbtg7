class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        res = []
        n = len(nums)
        for i in range(n):
            num1 = nums[i]
            if i>0 and nums[i]==nums[i-1]:
                continue
            l = i+1
            j = n-1
            while l<j:
                sum = num1+nums[l]+nums[j]
                if sum==0:
                    res.append([num1, nums[l], nums[j]])
                    l+=1
                    j-=1
                    while l<j and nums[l] == nums[l-1]:
                        i+=1
                    while l<j and nums[j] == nums[j+1]:
                        j-=1
                elif sum>0:
                    j-=1;
                else:
                    l+=1;
        return res