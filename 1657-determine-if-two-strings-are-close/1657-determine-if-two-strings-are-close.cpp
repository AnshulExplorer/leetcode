class Solution {
public:
    bool closeStrings(string str1, string str2) {
        if(str1.size()!=str2.size())return false;
        unordered_map<char,int>mp1,mp2;
        for(char ch :str1){
            mp1[ch]++;
        }
        for(char ch:str2){
            mp2[ch]++;
        }
        for(auto x:mp1){
            char c=x.first;
            if(mp2.find(c)==mp2.end())return false;
        }
        unordered_map<int ,int>ans1,ans2;
        for(auto x:mp1){
            int a=x.second;
            ans1[a]++;
        }
        for(auto x:mp2){
            int b=x.second;
            ans2[b]++;
        }
        //comparing maps 
        for(auto x:ans1){
            int key=x.first;
            if(ans2.find(key)==ans2.end())return false;
            if(ans2[key]!=ans1[key])return false;
        }
        return true;
    }
};