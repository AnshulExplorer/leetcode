class Solution {
public:
    Node* copyRandomList(Node* head) {
     //step 1 deep copy create 
       Node* dummy=new Node(0);
       Node* tempC=dummy;
       Node* temp=head;
       while(temp){
            Node* a=new Node(temp->val);
            tempC->next=a;
            tempC=tempC->next;
            temp=temp->next;
       }
       Node*a=head;  
       Node*b=dummy->next;
       //step 2 make map <original , duplicate>
       unordered_map<Node*,Node*>mp;
       Node*tempa=a;
       Node* tempb=b;
       while(tempa || tempb){
        mp[tempa]=tempb;
        tempa=tempa->next;
        tempb=tempb->next;
       }
       //step 3 
       for(auto x : mp){
            Node*o=x.first;
            Node*d=x.second;
            if(o->random!=NULL){
                Node*oRandom=o->random;
                Node*dRandom=mp[o->random];
                d->random=dRandom;
            }
       }
       return b;
    }
};