/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *prev = NULL;
    struct ListNode *cur = NULL;
    
    while (head && head->val == val) {
        head = head->next;
    }
    
    prev = head;
    while (prev) {
        cur = prev->next;
        if (cur && cur->val == val) {
            prev->next = cur->next;
        } else {
            prev = cur;
        }
    }
    
    return head;
}