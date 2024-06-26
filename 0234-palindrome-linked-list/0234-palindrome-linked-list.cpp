class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        vector<int> v;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int i=0;
        int j=v.size()-1;
        while(i<=j){
            if(v[i]!=v[j])return false;
            i++;
            j--;
        }
        return true;
    }
};