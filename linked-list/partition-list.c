struct ListNode* partition(struct ListNode* head, int x) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode *dummy1 = (struct ListNode*) malloc(sizeof(struct ListNode));
    struct ListNode *dummy2 = (struct ListNode*) malloc(sizeof(struct ListNode));
    dummy1->next = head;
    dummy2->next = NULL;
    struct ListNode *cur1 = dummy1, *cur2 = dummy2;

    while (cur1->next != NULL) {
        if (cur1->next->val < x) {
            cur2->next = cur1->next;
            cur2 = cur2->next;
            cur1->next = cur1->next->next;
        } else {
            cur1 = cur1->next;
        }
    }

    cur2->next = dummy1->next;
    head = dummy2->next;
    free(dummy1);
    free(dummy2);
    return head;
}