#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int ar[n];
        for (int j = 0; j < n; j++)
        {
            cin >> ar[j];
        }
        sort(ar, ar+n);
        for (int j = 0; j < n-1; j++)
        {
            if (ar[j+1] - ar[j] <= 1)
            {
                ar[j] = 0;
            }
        }
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if(ar[j] != 0) count++;
        }
        if (count == 1)
        {
            cout << "YES\n";
        }
        else cout << "NO\n";
        
    }
    
}