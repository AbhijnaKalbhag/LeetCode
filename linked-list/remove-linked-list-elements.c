struct ListNode* removeElements(struct ListNode* head, int val) {
    if (head == NULL) {
        return head;
    }
    while (head != NULL && head->val == val) {
        struct ListNode* newHead = head->next;
        free(head);
        head = newHead;
    }
    struct ListNode *cur = head, *prev = NULL;
    while (cur != NULL) {
        if (cur->val == val) {
            prev->next = cur->next;
            struct ListNode* newCur = cur->next;
            free(cur);
            cur = newCur;
        } else {
            prev = cur;
            cur = cur->next;
        }
    }
    return head;
}
