#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m;
    cin >> n >> m;
    long long int a, h = 1, t = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        if (h <= a)
        {
            t = t + a - h;
        }
        else
        {
            t = t + (n - h + a);
        }
        h = a;
        
    }
    cout << t << endl;   
}