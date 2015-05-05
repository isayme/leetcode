/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *newHead = NULL;
    struct ListNode *tmp = NULL;

    if (NULL == head) {
        return NULL;
    }

    while (head) {
        tmp = head;
        head = head->next;
        tmp->next = newHead;
        newHead = tmp;
    }

    return newHead;
}