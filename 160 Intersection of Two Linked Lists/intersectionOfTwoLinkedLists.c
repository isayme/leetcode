/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int lenA = 0;
    int lenB = 0;
    struct ListNode *tmp;
    
    if (NULL == headA || NULL == headB) return NULL;
    
    tmp = headA;
    do {
        lenA++;
        tmp = tmp->next;
    } while (tmp);
    
    tmp = headB;
    do {
        lenB++;
        tmp = tmp->next;
    } while (tmp);
    

    while (lenB > lenA) {
        headB = headB->next;
        lenB--;
    }
    while (lenA > lenB) {
        headA = headA->next;
        lenA--;
    }

    while (lenA--) {
        if (headA == headB) {
            return headA;
        }
        headA = headA->next;
        headB = headB->next;
    }
    
    return NULL;
}