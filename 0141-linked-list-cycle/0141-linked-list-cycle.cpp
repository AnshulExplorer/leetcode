class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if(head==NULL || head->next==NULL)return false;
        while(fast!=NULL && fast->next!=NULL){                  
            slow=slow->next;
            fast=fast->next->next;           
            if(head==NULL || head->next==NULL)return false;
            if(slow==fast)return true;
            
        }
        return false;
        
    }
};