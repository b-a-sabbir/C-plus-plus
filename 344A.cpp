#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, res = 0;
    cin >> n;
    int ar[n];
    for(int i = 0; i<n; i++)
    {
        cin >> ar[i];
    }
    int tmp = 0;
    for (int i = 0; i < n; i = tmp)
    {
        for (int j = i; ar[i] == ar[j]; j++)
        {
            tmp++;
        }
        res++;
    }
    cout << res << endl;
}