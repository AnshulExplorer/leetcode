class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string>v;
        string s="";
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]!=' '){
                s+=sentence[i];
            }
            else{
                v.push_back(s);
                s="";
            }
        }
        if(s.size()!=NULL)v.push_back(s);
        if(v[0][0]!=v[v.size()-1].back())return false;
        for(int i=0;i<v.size()-1;i++){
            if(v[i].back()!=v[i+1][0])return false;
        }
        return true;
    }
};