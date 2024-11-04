class Solution {
public:
    string compressedString(string word) {
        string ans="";
        int count=1;
        for(int i=1;i<word.size();i++){
            if(word[i]==word[i-1]){
                count++;
                if(count==9){
                    ans+=to_string(count);
                    ans+=word[i-1];
                    count=0;
                }
            }
            else{
                ans+=to_string(count);
                ans+=word[i-1];
                count=1;
            }
        }
        if(count>0){
            ans+=to_string(count);
            ans+=word.back();
        }
        return ans;
    }
};