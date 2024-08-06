class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        list<pair<int,char>>list;
        for(auto c:mp){
            list.push_back(pair(c.second,c.first));
        }
        //imp 
        int count=0;
        list.sort([](const pair<int,char>&a,const pair<int,char>&b){
            return a.first>b.first;
        });
        string ans="";
        while(count<s.size()){
            ans+=list.front().second;
            list.front().first--;
            if(list.front().first==0){
                list.pop_front();
            }
            count++;
        }
        return ans;
    }
};