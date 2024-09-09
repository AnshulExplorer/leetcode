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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>ans(m,vector<int>(n,-1));
        int minr=0;
        int maxr=m-1;
        int minc=0;
        int maxc=n-1;
        ListNode*temp=head;
        while(minr<=maxr && minc<=maxc){
            for(int i=minc;i<=maxc;i++){
                if(temp==NULL)return ans;
                ans[minr][i]=temp->val;
                temp=temp->next;
            }
            minr++;
            if(minr>maxr || minc>maxc)break;

            for(int i=minr;i<=maxr;i++){
                if(temp==NULL)return ans;
                ans[i][maxc]=temp->val;
                temp=temp->next;
            }
            maxc--;
            if(minr>maxr || minc>maxc)break;

            for(int i=maxc;i>=minc;i--){
                if(temp==NULL)return ans;
                ans[maxr][i]=temp->val;
                temp=temp->next;
            }
            maxr--;
            if(minr>maxr || minc>minc)break;

            for(int i=maxr;i>=minr;i--){
                if(temp==NULL)return ans;
                ans[i][minc]=temp->val;
                temp=temp->next;
            }
            minc++;
            if(minr>maxr || minc>maxc)return ans;
        }
        return ans;
    }
};