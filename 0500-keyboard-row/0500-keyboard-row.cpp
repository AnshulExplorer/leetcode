class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        set<char>st1={'Q','W','E','R','T','Y','U','I','O','P','q','w','e','r','t','y','u','i','o','p'};
        set<char>st2={'A','S','D','F','G','H','J','K','L','a','s','d','f','g','h','j','k','l'};
        set<char>st3={'Z','X','C','V','B','N','M','z','x','c','v','b','n','m'};
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            int s1=0,s2=0,s3=0;
            for(int j=0;j<words[i].size();j++){
                if(st1.find(words[i][j])!=st1.end()){
                    s1++;
                }
                else if(st2.find(words[i][j])!=st2.end()){
                    s2++;
                }
                else s3++;
            }
            if((s1==0 && s2==0) || (s2==0 && s3==0) || (s1==0 && s3==0)){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};