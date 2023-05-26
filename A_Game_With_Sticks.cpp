#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int minimum = min(n, m);
    if(minimum%2) cout << "Akshat";
    else cout << "Malvika";
    cout << endl;   
}