class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        queue<int> q;
        vector<bool> visited(n,false);  //array for visited
        vector<vector<int>> graph(n);  //adjacency list
        q.push(source);
        visited[source]=true;
        for( auto edge:edges){
            graph[edge[0]].push_back(edge[1]);  //connection
            graph[edge[1]].push_back(edge[0]);
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            if(node==destination)return true;
            vector<int>adj_nodes=graph[node]; //0->1,2, && 1->2,0 && 2->1,0
             for(int i=0;i<adj_nodes.size();i++){
                if(!visited[adj_nodes[i]]){
                    q.push(adj_nodes[i]);
                    visited[adj_nodes[i]]=true;   //bfs
                }
             }
        }
        return false;
    }
};