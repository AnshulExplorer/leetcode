class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
       int a=0;
       for(int i=0;i<commands.size();i++){
        if(commands[i]=="RIGHT")a=a+1;
        else if(commands[i]=="DOWN")a=a+n;
        else if(commands[i]=="LEFT")a=a-1;
        else a=a-n;   // UP
       }
       return a;
    }
};