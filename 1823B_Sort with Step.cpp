#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a, count = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            if(abs(a-i)%k != 0) count++;
        }
        if(count > 2) cout << "-1\n";
        else cout << count/2 << endl;
    }
    
       
}