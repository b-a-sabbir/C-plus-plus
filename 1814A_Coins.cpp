#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        if((n%2 == 0) || (n%k == 0) || (2+k == n) || (n-k)%2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    
}