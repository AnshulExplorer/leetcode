class Solution {
public:
    bool judgeCircle(string moves) {
        int a=0,b=0;
        int i=0;
        while(i<moves.size()){
            if(moves[i]=='U')a++;
            else if(moves[i]=='D')a--;
            else if(moves[i]=='R')b++;
            else if(moves[i]=='L')b--;
            i++;
        }
        if(a==0 && b==0)return true;
        return false;
    }
};