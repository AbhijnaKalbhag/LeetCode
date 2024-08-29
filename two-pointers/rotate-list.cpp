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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *temp=head;
        int m=1; 
while(temp->next!=NULL)
{
    m++;
    temp=temp->next;
};
        k=k%m;
        temp->next=head;
        for(int i=0;i<m-k;i++){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;

        return head;
    }

   
};