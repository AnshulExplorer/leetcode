class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        vector<int>ans(n,0);
        sort(deck.begin(),deck.end()); //2 3 5 7 11 13 17 
        queue<int>q;
        //store indexes inn queue 
        for(int i=0;i<n;i++){
            q.push(i);
        }
        //find order in which indexes are traversed 
        //and fill sorted elements accordingly 
        for(int i=0;i<n;i++){
            ans[q.front()]=deck[i]; //store element at index traversed 
            q.pop();
            q.push(q.front());
            q.pop();
        }
        return ans;     
    }
};