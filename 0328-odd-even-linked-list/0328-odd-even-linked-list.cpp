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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        ListNode*dumpy=new ListNode(0);
        ListNode*dumpyptr=dumpy;
        ListNode*odd=head;
        ListNode*even=head->next;

        while(odd!=NULL && odd->next!=NULL){
            dumpyptr->next=new ListNode(odd->val);
            dumpyptr=dumpyptr->next;
            odd=odd->next->next;    
        }
        if(odd!=NULL){
            dumpyptr->next= new ListNode(odd->val);
            dumpyptr=dumpyptr->next;
        }
        
        while(even!=NULL && even->next!=NULL){
            dumpyptr->next=new ListNode(even->val);
            dumpyptr=dumpyptr->next;
            even=even->next->next; 
        }
        if(even!=NULL){
            dumpyptr->next=new ListNode(even->val);
            dumpyptr=dumpyptr->next;
        }
        return dumpy->next;
    }
};