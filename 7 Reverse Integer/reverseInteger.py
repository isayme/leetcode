class Solution:
    # @param {integer} x
    # @return {integer}
    def reverse(self, x):
        ix = str(x)
        if x < 0:
            ix = ix[1:]
    
        rel = int(ix[::-1])
        rel = rel if x > 0 else -rel
    
        maxint = (1<<31)-1
        if rel > maxint or rel < (-maxint-1):
            return 0
    
        return rel
        