#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar+n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] <= ar[n-1])
        {
            count = count + (ar[n-1] - ar[i]);
        }
        
    }
    cout << count << endl;   
}