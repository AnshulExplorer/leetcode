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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*dumb=new ListNode(0);
        ListNode*temp=dumb;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry!=NULL){
            int add=0;
            if(l1!=NULL){
                add+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                add+=l2->val;
                l2=l2->next;
            }
            add+=carry;
            carry=add/10;
            ListNode*node=new ListNode(add%10);
            temp->next=node;
            temp=temp->next;
        }
        return dumb->next;
    }
};