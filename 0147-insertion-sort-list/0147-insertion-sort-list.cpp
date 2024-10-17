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
    ListNode* insertionSortList(ListNode* head) {
        if(!head || !head->next)return head;
        ListNode* temp=head;
        vector<int>v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());  // 4 2 1 3 
        ListNode*dumpy=new ListNode(0);
        ListNode*dumpyhead=dumpy;
        for(int val:v){
            ListNode*x=new ListNode(val);
            dumpyhead->next=x;
            dumpyhead=dumpyhead->next;
        }
        return dumpy->next;
    }
};