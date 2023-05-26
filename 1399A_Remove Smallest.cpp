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
        int tmp = n;
        for (int j = 0; i < n; i++)
        {
            cin >> ar[j];
        }
        for (int j = 0; j < n; i++)
        {
            for (int k = j+1; k < n; k++)
            {
                if(ar[k] - ar[j] > 0 || ar[k] == ar[j])
                {
                    ar[j] = ar[k];
                    ar[k] = 0;
                    tmp--;
                }
            }
            
        }
        if (tmp-1 == 1)
        {
            cout << "YES\n";
        }
        else cout << "NO\n";
        
        
    }
        
}