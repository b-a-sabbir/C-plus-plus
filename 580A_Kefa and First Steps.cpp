#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], count = 0, tmp = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] >= tmp) count++;
        else count = 1;
        tmp = a[i];
        mx = max(mx, count);
    }
    cout << mx << endl;   
}