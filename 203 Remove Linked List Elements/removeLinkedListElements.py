# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param {ListNode} head
    # @param {integer} val
    # @return {ListNode}
    def removeElements(self, head, val):
        while head and head.val == val:
            head = head.next
            
        prev = head
        while prev:
            cur = prev.next
            if cur and cur.val == val:
                prev.next = cur.next
            else:
                prev = cur
                
        return head