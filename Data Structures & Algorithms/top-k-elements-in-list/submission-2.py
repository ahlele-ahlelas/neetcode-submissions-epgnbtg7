class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = Counter(nums)
        ans = sorted(freq,key = lambda x:freq[x],reverse = True)[:k]
        return ans