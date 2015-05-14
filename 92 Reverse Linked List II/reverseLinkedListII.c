/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int m, int n) {
    struct ListNode *prev = head;
    struct ListNode *next = NULL;
    struct ListNode *cur = NULL;
    struct ListNode *tmp = NULL;
    int flag = m == 1;
    
    if (NULL == head || m == n) return head;
    
    n = n - m - flag;

    while (m > 2) {
        prev = prev->next;
        m--;
    }
    
    tmp = prev;
    while (n >= 0) {
        tmp = tmp->next;
        n--;
    }
    next = tmp->next;
    tmp->next = NULL;
    
    cur = flag ? prev : prev->next;
    while (cur) {
        tmp = cur->next;
        cur->next = next;
        next = cur;
        cur = tmp;
    }
    
    if (flag) {
        return next;
    } else {
        prev->next = next;
        return head;
    }
}