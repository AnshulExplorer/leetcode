class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int>st;
        for(int x:arr){
            if(st.find(2*x)!=st.end() || (x%2==0 && st.find(x/2)!=st.end())){
                return true;
            }
            st.insert(x);
        }
        return false;
    }
};