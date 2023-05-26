#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i <n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a, a+n);
        sort(b, b+n, greater<int>());
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if(i < k && a[i] < b[i]) swap(b[i], a[i]);
            count = count + a[i];
        }
        cout << count << endl;
        
        
    }
       
}