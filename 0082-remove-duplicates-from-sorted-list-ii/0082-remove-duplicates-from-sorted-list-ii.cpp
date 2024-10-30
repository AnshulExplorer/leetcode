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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        map<int,int>mp;
        ListNode*temp=head;
        while(temp!=NULL){
           int v=temp->val;
           mp[v]++;
           temp=temp->next;
        }
        ListNode*dummy=new ListNode(0);
        ListNode*dummyhead=dummy;
        for(auto x:mp){
            if(mp[x.first]==1){
                ListNode*n=new ListNode(x.first);
                dummyhead->next=n;
                dummyhead=dummyhead->next;
            }
        }
        return dummy->next;
    }
};