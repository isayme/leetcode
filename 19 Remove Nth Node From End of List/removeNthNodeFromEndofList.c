/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *first = head;
    struct ListNode *second = head;
    int i;
    
    for (i = 0; first && i < n; i++) {
        first = first->next;
    }
    
    if (i < n) {
        return head;
    }
    
    if (NULL == first) {
        return head->next;
    }

    while (first->next) {
        first = first->next;
        second = second->next;
    }
    
    second->next = second->next->next;
    
    return head;
}