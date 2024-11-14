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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next==NULL)return head;
        ListNode*temp=head;
        vector<int>v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }  
        // 10 20 30 40 50
        int low=left-1;
        int high=right-1;
        while(low<=high){
            swap(v[low],v[high]);
            low++,high--;
        }
        // // 10 40 30 20 50
        temp=head;
        for(int i=0;i<v.size();i++){
            temp->val=v[i];
            temp=temp->next;
        }
        return head;
    }
};