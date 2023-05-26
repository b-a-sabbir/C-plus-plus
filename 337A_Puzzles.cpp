#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a+m);
    int tmp = 0, mn = a[n-1] - a[0];
    for (int i = 0; i <= (m-n); i++)
    {
        tmp = a[n-1+i] - a[i];
        mn = min(tmp, mn);
    }
    cout << abs(mn) << endl;
}