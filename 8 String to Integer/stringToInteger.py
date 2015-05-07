class Solution:
    # @param {string} str
    # @return {integer}
    def myAtoi(self, str):
        rel = 0
        flag = 1
        idx = 0
        str = str.lstrip()
        if len(str) == 0:
            return 0
            
        if str[0] == '+':
            idx = 1
        elif str[0] == '-':
            idx = 1
            flag = -1

        try:
            while str[idx].isdigit():
                rel = rel * 10 + ord(str[idx]) - ord('0')
                idx += 1
        except:
            pass
        
        rel = rel * flag
        
        if rel > 2147483647:
            return 2147483647
        if rel < -2147483648:
            return -2147483648
        else:
            return rel