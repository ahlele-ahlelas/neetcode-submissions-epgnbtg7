class Solution:
    def maxArea(self, heights: List[int]) -> int:
        n = len(heights)
        i = 0
        j = n-1
        area = 0
        while i<j:
            height = min(heights[i],heights[j])
            area = max(area,height*(j-i))
            if heights[i]<heights[j]:
                i+=1
            else:
                j-=1
        return area


