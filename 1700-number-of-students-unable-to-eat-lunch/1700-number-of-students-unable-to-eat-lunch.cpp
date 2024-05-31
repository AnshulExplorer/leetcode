class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n=students.size();
        queue<int>q;
        for(int i=0;i<students.size();i++){
            q.push(students[i]);
        }
        int count=0;
        int i=0; // trverse to the sandwiches
        while(q.size()>0 && count!=q.size()){
            if(q.front()==sandwiches[i]){
                count=0; //VIMP
                q.pop();
                i++;
            }
            else {
                q.push(q.front());
                q.pop();
                count++;
            }
        }
        return q.size();
    }
};