#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int ar[3];
    ar[0] = (k*l)/(nl);
    ar[1] = c*d;
    ar[2] = p/(np);
    sort(ar, ar+3);
    cout << ar[0]/n << endl;   
}