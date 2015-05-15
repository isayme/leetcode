/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *n = head;
    
    while (n) {
        n = n->next;
        if (NULL == n) {
            return false;
        }
        n = n->next;
        
        head = head->next;
        
        if (head == n) {
            return true;
        }
    }
    
    return false;
}