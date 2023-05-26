#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    double y;
    cin >> x;
    y = (log(x)/log(2));
    long long result = pow(2, floor(y));
    // cout << (long long)(x - pow(2, y)) + 1 << endl;
    // cout << y << endl;
    cout << result << endl;
    return 0;
}