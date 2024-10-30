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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        vector<int>v;
        ListNode*temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        // 1 2 3  -> 2 1 4 3
        if(v.size() %2==0){
            for(int i=0;i<v.size();i=i+2){
                int t=v[i];
                v[i]=v[i+1];                    // swap for even case 
                v[i+1]=t;    
            }
        }
        else {
            for(int i=0;i<v.size()-1;i=i+2){
                int t=v[i];
                v[i]=v[i+1];                    // swap for odd 
                v[i+1]=t;
            }
        }
        temp=head;
        for(int i=0;i<v.size();i++){
            temp->val=v[i];
            temp=temp->next;
        }
        return head;
    }
};