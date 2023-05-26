#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        if (i%4 == 0) cout << "#";
        for(int j = 1; j <= m-1; j++)
        {
            if(i%2 > 0) cout << "#";
            else cout << ".";
        }
        if(i%4 != 0)cout << "#";
        cout << endl;
    }
    
}