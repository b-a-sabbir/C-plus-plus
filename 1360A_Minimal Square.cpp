#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int mn = 2*min(a, b), mx = max(a, b);
        if(mn*mn >= 2*a*b)
        {
            cout << pow(mn, 2) << endl;
        }
        else cout << pow(mx, 2) << endl;
    }
       
}