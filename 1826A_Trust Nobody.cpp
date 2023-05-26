#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], mini = n, equal = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mini = min(mini, a[i]);
            if(a[i] == n && a[i] != 0) equal++;
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i] == mini) count++;
        }
        
        if(equal == n) cout << "-1\n";
        else cout << n - count << endl;
    }
       
}