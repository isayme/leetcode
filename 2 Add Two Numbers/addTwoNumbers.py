# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param {ListNode} l1
    # @param {ListNode} l2
    # @return {ListNode}
    def addTwoNumbers(self, l1, l2):
        flag = 0
        
        result = ListNode(0)
        cur = result

        while l1 and l2:
            (flag, val) = divmod(l1.val+l2.val+flag, 10)
            cur.next = ListNode(val)
            l1 = l1.next
            l2 = l2.next
            cur = cur.next
        
        l = l1 or l2
        while l:
            (flag, val) = divmod(l.val+flag, 10)
            cur.next = ListNode(val)
            l = l.next
            cur = cur.next
            
        if flag:
            cur.next = ListNode(flag)
            
        return result.next