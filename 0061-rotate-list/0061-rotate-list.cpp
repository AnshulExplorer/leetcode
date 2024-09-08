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
    void reverse(vector<int>&ans,int left,int right){
        while(left < right){
            int temp=ans[left];
            ans[left]=ans[right];
            ans[right]=temp;
            left++,right--;
        }
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k<=0)return head;
        ListNode*temp=head;
        vector<int>ans;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        k=k%ans.size();
        reverse(ans,0,ans.size()-1);
        reverse(ans,0,k-1);
        reverse(ans,k,ans.size()-1);
        temp=head;
        int idx=0;
        while(temp){
            temp->val=ans[idx++];
            temp=temp->next;
        }
        return head;
    }
};