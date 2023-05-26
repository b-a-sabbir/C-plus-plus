#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q, n, t;
    cin >> q;
    while (q--)
    {
        cin >> n >> t;
        int a[n], b[n], mam = 0, mam2 = 0, v = 0, sum = 0;
        for (int i = 0; i < 2*n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i]+i <= t && a[n+i] <= a[n+i+1])
            {
                mam = i;
                v++;
            }
        }
        if(v >= 1) cout << mam+1 << endl;
        else cout << "-1\n";
    }
       
}