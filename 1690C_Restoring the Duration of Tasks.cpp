#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], t[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int val = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> t[i];
            if(a[i] >= val)
            {
                cout << t[i] - a[i] << " ";
            }
            else
            {
                cout << t[i] - val << " ";
            }
            val = t[i];
        }
        cout << endl;
        
    }
    
}