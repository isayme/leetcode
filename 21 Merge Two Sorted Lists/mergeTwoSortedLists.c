/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *head = NULL;
    struct ListNode *tmp;
    
    if (NULL == l1) {
        return l2;
    }
    if (NULL == l2) {
        return l1;
    }
    
    if (l1->val <= l2->val) {
        head = l1;
        l1 = l1->next;
        if (NULL == l1) {
            head->next = l2;
            return head;
        }
    } else {
        head = l2;
        l2 = l2->next;
        if (NULL == l2) {
            head->next = l1;
            return head;
        }
    }
    
    tmp = head;
    while (1) {
        while (l1->val <= l2->val) {
            tmp->next = l1;
            tmp = l1;
            l1 = l1->next;
            if (NULL == l1) {
                tmp->next = l2;
                return head;
            }
        }
        while (l2->val <= l1->val) {
            tmp->next = l2;
            tmp = l2;
            l2 = l2->next;
            if (NULL == l2) {
                tmp->next = l1;
                return head;
            }
        }
    }
}