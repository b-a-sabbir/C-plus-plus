#include <bits/stdc++.h>
int tmp = 0;
using namespace std;

void rush(int n, int m)
{
    if(n == m) 
    {
        tmp++;
    }
    else if(n%3 != 0) return;
    else
    {
        int left, right;
        left = n/3;
        right = left*2;
        rush(left, m);
        rush(right, m);
    }

}

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        tmp = 0;
        cin >> n >> m;
        rush(n, m);
        if(tmp == 0) cout << "NO\n";
        else cout << "YES\n";
    }
       
}