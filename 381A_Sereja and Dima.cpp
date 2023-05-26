#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s = 0, d = 0;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    s += max(ar[0], ar[n-1]);
    
}