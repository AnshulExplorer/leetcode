class Solution {
public:
    bool canChange(string start, string target) {
        int n=start.size();
        string a;
        string b;
        for(int i=0;i<n;i++){
            if(start[i]!='_')a+=start[i];
            if(target[i]!='_')b+=target[i];
        }
        if(a!=b)return false;
        int i=0,j=0;
        while(i<start.size() && j<target.size()){
            while(start[i]=='_')i++;
            while(target[j]=='_')j++;
            if(i==start.size() || j==target.size())break;
            if(start[i]!=target[j])return false;
            if(start[i]=='L' && i<j)return false;
            if(start[i]=='R' && i>j)return false;
            i++,j++;
        }
        return true;
    }
};