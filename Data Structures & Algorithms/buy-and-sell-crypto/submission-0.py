class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        res = 0
        buy = prices[0]
        n = len(prices)
        for i in range(n):
            buy = min(buy,prices[i])
            sell = prices[i]
            res = max(res,sell-buy)
        return res