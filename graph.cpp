#include<bits/stdc++.h>
using namespace std;

template <typename T>
class graph{

public:
    unordered_map<T, list<pair<T,T>>> adj;

    void addEdge(T u, T v, bool direction, int weight){//creating adjancency list
        //direction=0 -> undirected
        //direction=1 -> directed

        //add edge btw u and v node
        adj[u].push_back({v,weight});
        if(direction==0){
            adj[v].push_back({u,weight});//for undirected weighted graph
        }

    }

    void printGraph(){
        
        for(auto i : adj){
            cout<<i.first<<"-> ";
            for(auto j : i.second){
                cout<<"{"<<j.first<<", "<<j.second<<"}";
            }
            cout<<endl;
        }
    }

    void BFS(int node, unordered_map<int, list<int>> adj , unordered_map<int,bool> visited, vector<int> ans){
        queue<int> q;
        q.push(node);
        visited[node]= true;

        while(!q.empty()){
            int front= q.front();
            q.pop();
            ans.push_back(front);

            for(auto i: adj[front]){
                if(!visited[i]){
                    q.push(i);
                    visited[i]=true;
                }
            }
        }
    }

    void DFS(int node, unordered_map<int, list<int>> &adj , unordered_map<int,bool> &visited, vector<int> &ans){

        ans.push_back(node);
        visited[node]=1;
        for(auto i : adj[node]){
            if(!visited[i]){
                DFS(i, adj, visited, ans);
            }
        }
    }
    void dfs(int node, unordered_map<int,list<pair<int,int>>> &adj, stack<int> &s, unordered_map<int,bool> &visited){
        visited[node]=1;

        for(auto nei: adj[node]){
            if(!visited[nei.first]){
                dfs(nei.first,adj,s,visited);
            }
        }
        s.push(node);
        
    }

    void shortestDistanceInWeightedDirectedGraph(){
        //get topological sort
        unordered_map<int, bool> visited;
        int n= adj.size();
        stack<int> s;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i, adj, s, visited);
            }
        }
        
        //we have got the topological sort and now we will use adj, topo sort series and distance array to find our shortest distance to each node
        
        vector<int> dist(n,INT_MAX);
        dist[1]= 0; //distance[sourceNode]=0;
        
        while(!s.empty()){
            int front= s.top();
            s.pop();
            if(dist[front]==INT_MAX) continue;
            for(auto nei: adj[front]){
                if(dist[front]+nei.second <= dist[nei.first]){
                    dist[nei.first]= dist[front]+nei.second;
                }
            }
        }
        for(int i=0;i<n+1;i++){
            cout<<dist[i]<<", ";
        }
    }
};

int main(){
    // int n,e;
    // cout<<"Enter number of nodes: "<<endl;
    // cin>>n;
    // cout<<"enter number of edges: "<<endl;
    // cin>>e;

    graph<int> g;

    // for(int i=0;i<e;i++){
    //     int u,v,w;
    //     cin>>u>>v>>w;
    //     g.addEdge(u,v,1, w);
    // }
    g.addEdge(0,1,1,5);
    g.addEdge(0,2,1,3);
    g.addEdge(1,2,1,2);
    g.addEdge(1,3,1,6);
    g.addEdge(2,3,1,7);
    g.addEdge(2,4,1,4);
    g.addEdge(2,5,1,2);
    g.addEdge(3,4,1,-1);
    g.addEdge(4,5,1,-2);
    
    g.printGraph();

    g.shortestDistanceInWeightedDirectedGraph();


    // g.printGraph();
}
