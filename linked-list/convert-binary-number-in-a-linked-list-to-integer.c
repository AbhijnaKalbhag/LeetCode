#include<math.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head){

int n=0;
struct ListNode* temp,*cur;
temp=head;
while(temp!=NULL)
{
    n++;
    temp=temp->next;
}
cur=head;
int i,num=0;
i=n-1;
while(cur!=NULL)
{
   num=num+((cur->val)*pow(2,i));
   i--;
   cur=cur->next;
}
return num;
}