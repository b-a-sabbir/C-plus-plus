#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a, count = 0, m = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if(a == 0) count++;
            else if(a == 1) count = 0;
            m = max(m, count);
        }
        cout << m << endl;
    }
       
}