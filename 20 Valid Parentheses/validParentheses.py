class Solution:
    # @param {string} s
    # @return {boolean}
    def isValid(self, s):
        c = []
        l = len(s)
        d = {'(': 1, ')': -1,'[': 2, ']': -2,'{': 3, '}': -3}
        
        if not l or l % 2 == 1 or d[s[0]] < 0:
            return False

        for i in xrange(l):
            if len(c) > 0 and (c[-1] + d[s[i]]) == 0:
                c.pop()
            elif d[s[i]] > 0:
                c.append(d[s[i]])
            else:
                return False
                
        if len(c) > 0:
            return False
        else:
            return True