class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int ten=0,five=0;
        int n=bills.size();
        if(bills[0]==10 || bills[0]==20)return false;
        for(int i=0;i<n;i++){
            if(bills[i]==5)five++;
            else if(bills[i]==10){
                if(five>0){
                    five--;
                    ten++;
                }
                else return false;
            }
            else if(bills[i]==20){            //for 20
                if(ten>0 && five>0){
                    ten--;
                    five--;
                }
                else if(five>=3){
                    five-=3;
                }
                else return false;
            }
        }
        return true;
    }
};