# class Solution(object):
#     def maxProfit(self, prices):
#         i=0
#         mx =0
#         j=1
#         while i<j and j <len(prices) :
#             if prices[i]> prices[j]:
#                  i=j
#                  j=j+1

#             elif prices[i]< prices[j]:
#                  mx = max(mx,prices[j]-prices[i])
#                  j=j+1
#         return mx        
#         """
#         :type prices: List[int]
#         :rtype: int
#         """
        
class Solution(object):
    def maxProfit(self, prices):
        i = 0
        j = 1
        mx = 0

        while j < len(prices):
            if prices[i] < prices[j]:
                mx = max(mx, prices[j] - prices[i])
            else:
                i = j
            j += 1

        return mx