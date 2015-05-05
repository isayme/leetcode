class Solution:
    # @param {integer[]} nums
    # @param {integer} target
    # @return {integer[]}
    def twoSum(self, nums, target):
        hm = {}
    
        for idx, value in enumerate(nums):
            tval = target - value
            if tval in hm:
                return [hm[tval]+1, idx+1]
            else:
                hm[value] = idx