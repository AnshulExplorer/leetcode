class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int ans=0;
        int i=0;
        for(int j=0;j<sandwiches[j];j++){
           while(students[i]){
                if(sandwiches[j]==students[i]){
                    ans++;
                    students[i]=-1;   
                }
                i++;
           }
        }
        return ans;
    }
};