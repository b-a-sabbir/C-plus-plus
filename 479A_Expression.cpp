#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, mx = 0, v[5];
    cin >> a >> b >> c;
    v[0] = a + (b*c);
    v[1] = a * (b + c);
    v[2] = a * b * c;
    v[3] = (a + b) * c;
    v[4] = a + b + c;
    for (int i = 0; i < 5; i++)
    {
        mx = max(mx, v[i]);
    }
    cout << mx << endl;
}