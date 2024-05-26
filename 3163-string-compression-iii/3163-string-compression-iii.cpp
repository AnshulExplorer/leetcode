class Solution {
public:
    string compressedString(string word) {

        string comp = "";
        int count=1;
        for(int i=1;i<word.size();i++){
            if(word[i]==word[i-1]){
                count++;
                if(count==9){
                    comp.push_back('0'+ count);
                    comp.push_back(word[i-1]);
                    count=0;
                }
            }
            else{
                if(count>0){
                    comp.push_back('0' + count);
                    comp.push_back(word[i-1]);
                }
                count=1;
            }          
        }
        if(count>0){
            comp.push_back('0' + count);
            comp.push_back(word.back());
        }
        return comp;
    }
};