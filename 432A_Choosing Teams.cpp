#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int ar[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if(5 - ar[i] >= k) count++;
    }
    cout << count/3 << endl;   
}