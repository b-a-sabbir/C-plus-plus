#include <bits/stdc++.h>
using namespace std;

int matrix[1000][1000], visited[1000], node, edge;

void bfs(int strt)
{
    queue<int> q;
    q.push(strt);
    visited[strt] = 1;
    while (!q.empty())
    {
        int head = q.front();
        cout << head << " ";
        q.pop();
        for(int i = 0; i < node; i++)
        {
            if(matrix[head][i] == 1 and !visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
    
}

void dfs(int strt)
{
    stack<int> s;
    s.push(strt);
    while (!s.empty())
    {
        int head = s.top();
        if(!visited[head])
        {
            cout << head << " ";
            visited[head] = 1;
        }
        s.pop();
        for(int i = 0; i < node; i++)
        {
            if(matrix[head][i] == 1 and !visited[i])
            {
                s.push(i);
            }
        }
    }
    

}


int main()
{
    cout << "Enter node and edge: " << endl;
    cin >> node >> edge;
    cout << "Enter adjacent :" << endl;
    for(int i = 0; i < node; i++)
    {
        cout << "Adjacent :\n";
        int x, y;
        cin >> x >> y;
        matrix[x][y] = matrix[y][x] = 1;
    }
    cout << "BFS: " << endl;
    cout << "Enter starting node: " << endl;
    int strt;
    cin >> strt;
    bfs(strt);
    cout << endl;
    memset(visited, 0, sizeof(visited));
    dfs(strt);
}