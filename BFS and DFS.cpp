#include<bits/stdc++.h>
using namespace std;

const int N = 1e3;
int adj_matrix[N][N];
int vis[N], node, edges;

void bfs(int src){
    vis[src] = 1;

    queue<int> q;
    q.push(src);

    while(!q.empty()){
        int head = q.front(); 
        cout << head << " ";
        q.pop();
        for(int i = 0; i < node; i++){
            if(adj_matrix[head][i] == 1 and !vis[i]){
                q.push(i);
                vis[i] = true;
            }
        }
    }
}

void dfs(int src){
    stack<int> st;
    st.push(src);

    while(!st.empty()){
        int head = st.top();
        st.pop();

        if(!vis[head]){
            cout << head << " ";
            vis[head] = 1;
        }

        for(int i = 0; i < node; i++){
            if(!vis[i] and adj_matrix[head][i] == 1){
                st.push(i);
            }
        }
    }
}


int main(){
    cin >> node >> edges;
    for(int i = 0; i < edges; i++){
        int u, v;
        cout << "Enter adjacent" << endl;
        cin >> u >> v;
        adj_matrix[u][v] = adj_matrix[v][u] = 1;
    }

    int src = 0;
    cout << "BFS: ";
    bfs(src);
    cout << endl;

    memset(vis, 0, sizeof(vis));
    cout << "DFS: ";
    dfs(src);
}