class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps=0,n=plants.size();
        int i=0;
        int real=capacity;
        while(i<n){
            if(capacity>=plants[i]){
                steps++;
                capacity-=plants[i];
            }
            else {
                steps=steps+(i*2);
                capacity=real;
                steps++;
                capacity-=plants[i];
            }
            i++;
        }
        return steps ;
    }
};