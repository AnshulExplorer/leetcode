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
    int pairSum(ListNode* head) {
        ListNode*temp=head;
        stack<int>st;
        while(temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        int val=0;
        temp=head;
        while(!st.empty()){
            val=max(val,st.top()+temp->val);
            temp=temp->next;
            st.pop();
        }
        return val;
    }
};