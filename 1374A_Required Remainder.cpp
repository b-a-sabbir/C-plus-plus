#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, y, n, div;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> n;
        div = n/x;
        if((div*x + y) > n)cout << (div-1)*x + y << endl;
        else cout << div*x + y << endl;
    }
    
}