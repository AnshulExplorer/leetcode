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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*temp=head->next;
        ListNode*ans=head;
        int sum=0;
        while(temp){
            sum += temp->val;
            if(temp->val==0){
                ans->val=sum;
                if(temp->next!=NULL)ans=ans->next;
                sum=0;
            }
            temp=temp->next;
        }
        ans->next=NULL;
        return head;
    }
};