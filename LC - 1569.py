1569. Number of Ways to Reorder Array to Get Same BST

CODE:
  class Solution:
    def numOfWays(self, nums: List[int]) -> int:
        def f(nums):
            if len(nums) <= 2: return 1
            left = [v for v in nums if v < nums[0]]
            right = [v for v in nums if v > nums[0]]
            return comb(len(left)+len(right), len(right)) * f(left) * f(right)
        return (f(nums)-1) % (10**9+7)
