#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n, p = 0;
    cin >> s >> n;
    int x[n], y[n];
    for(int i = 0; i<n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(x[i] >= x[j])
            {
                swap(x[i], x[j]);
                swap(y[i], y[j]);
            }
        }
        if(s > x[i]) s += y[i];
        else 
        {
            p++;
            break;
        }   
    }
    if(p > 0) cout << "NO\n";
    else cout << "YES\n";  
}