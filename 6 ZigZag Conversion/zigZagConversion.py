class Solution:
    # @param {string} s
    # @param {integer} numRows
    # @return {string}
    def convert(self, s, numRows):
        if numRows == 1:
            return s
        
        ss = list(s)
        rel = [[] for i in xrange(numRows)]
        slen = len(ss)
    
        offset = 0
        while offset < slen:
    
            for i in xrange(offset, offset+numRows):
                if i >= slen:
                    break
                
                rel[i-offset].append(ss[i])
    
            offset += numRows
            for i in xrange(offset, offset+numRows-2):
                if i >= slen:
                    break
                rel[offset+numRows-i-2].append(ss[i])
    
            offset = offset + numRows - 2
    
        for i in xrange(numRows):
            rel[i] = ''.join(rel[i])
    
        return ''.join(rel)