#include <bits/stdc++.h>
using namespace std;
int main()
{
    double t, a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int res;
        cin >> a >> b;
        res = ceil(abs(a-b)/10);
        cout << res << endl;
    }
       
}