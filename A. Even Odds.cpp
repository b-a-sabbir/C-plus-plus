#include <bits/stdc++.h>
using namespace std;
int main()
{
    long k, n, half;
    cin >> k >> n;
    if(k%2 == 0) {
        half = k/2;
        if(n <= half) cout << (2*n) - 1 << endl;
        else cout << 2*(n - half) << endl;
    }
    else 
    {
        half = k/2 + 1;
        if(n <= half) cout << (2*n) - 1 << endl;
        else cout << 2*(n - half) << endl;
    }

}