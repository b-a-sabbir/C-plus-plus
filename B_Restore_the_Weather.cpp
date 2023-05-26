#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    long long int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector<lli> va(n);
        vector<pair<lli, lli>> vp(n);
        for (lli i = 0; i < n; i++)
        {
            cin >> va[i];
            vp.push_back({va[i], i});
        }
        
        sort(vp.begin(), vp.end());
        vector<lli> vb;
        for (lli i = 0; i < n; i++)
        {
            cin >> vb[i];
        }
        sort(vb.begin(), vb.end());
        
        vector<lli> vans(n);
        for(lli i = 0; i<n; i++)
        {
            lli a[i] = vp[i].second;
            cout << a[i] << endl;
        }
        
        
    }
    
}