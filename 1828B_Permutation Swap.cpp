#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int mx = max(a, b), mn = min(a, b);
    if(mn == 0) return mx;
    return gcd(mn, mx % mn);
}

int main()
{
    int t, n, a;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int common = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            a = abs(a-i);
            common = gcd(common, a);
        }
        cout << common << endl;
    }
       
}