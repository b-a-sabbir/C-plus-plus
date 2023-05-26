#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, res = 0;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int min = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        if(ar[i] <= ar[min])
        {
            min = i;
        }
    }
    int tmp = 0;
    for (int i = min; i < n; i++)
    {
        if(ar[i] == ar[n-1]) break;
        tmp = ar[i];
        ar[i] = ar[i+1];
        ar[i+1] = tmp;
        res++;
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > ar[max])
        {
            max = i;
        }
        
    }
    cout << res + max << endl;
}