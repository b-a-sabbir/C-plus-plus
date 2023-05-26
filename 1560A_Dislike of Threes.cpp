#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> k;
        int sum = 0;
        for (int j = 1; j <= k; j++)
        {
            sum++;
            if (sum%3 == 0 || sum%10 == 3)
            {
                j--;
                continue;
            }
        }
        cout << sum << endl;
    }
       
}