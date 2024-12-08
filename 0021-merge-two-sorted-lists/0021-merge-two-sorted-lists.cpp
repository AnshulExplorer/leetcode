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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*dummy=new ListNode(7);
        ListNode*temp=dummy;
        ListNode*a=list1;
        ListNode*b=list2;
        while(a!=NULL && b!=NULL){
            if(a->val <= b->val){
                temp->next=a;
                temp=temp->next;
                a=a->next; 
            }
            else{
                temp->next=b;
                temp=temp->next;
                b=b->next;
            }
        }
        if(b!=NULL)temp->next=b;
        else temp->next=a;
        return dummy->next;

    }
};