/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
       ListNode *slow=head,*fast=head;
       while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
       }
       if(fast!=NULL){
        slow=slow->next;
       }
       slow=reverseList(slow);
       while(slow!=NULL){
        if(head->val!=slow->val){
            return false;
        }
        slow=slow->next;
        head=head->next;
       }
       return true;
    }
    private:
    ListNode* reverseList(ListNode* head){
        ListNode *temp,*newhead=NULL;
        while(head){
            temp=head;
            head=head->next;
            temp->next=newhead;
            newhead=temp;
        }
        return newhead;
    }
};