/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    
    if (NULL == head) return NULL;
    
    while (fast) {
        fast = fast->next;
        if (NULL == fast) return NULL;
        fast = fast->next;
        
        slow = slow->next;
        
        if (fast == slow) {
            break;
        }
    }
    
    if (NULL == fast) return NULL;
    
    slow = fast;
    while (head != slow) {
        head = head->next;
        slow = slow->next;
    }
    
    return head;
}