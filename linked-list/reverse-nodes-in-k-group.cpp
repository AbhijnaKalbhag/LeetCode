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
    ListNode* reverseKGroup(ListNode* head, int k) {
        auto temp=head;
        ListNode *nextNode=NULL;
        ListNode *prevLast=NULL;

        while(temp!=NULL){
            auto kth_node=getKthnode(temp,k);
            if(kth_node==NULL){
                if(prevLast!=NULL){
                    prevLast->next=temp;
                }
                break;
            }
            nextNode=kth_node->next;
            kth_node->next=NULL;
            reverseList(temp);
            if(temp==head){
                head=kth_node;
            }
            else{
                prevLast->next=kth_node;
            }
            prevLast=temp;
            temp=nextNode;

        }
        return head;
    }
    private:
    ListNode* reverseList(ListNode* cur){
         ListNode *temp=cur,*newhead=NULL;
            while(cur!=NULL){
            temp=cur;
            cur=cur->next;
            temp->next=newhead;
            newhead=temp;
        }
        return newhead;
    }
    ListNode* getKthnode(ListNode* cur,int k){
        k--;
        while(cur!=NULL && k>0){
            cur=cur->next;
            k--;
        }
        return cur;
    }
};