#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a[4];
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> a[j];
        }
        for (int j = 1; j < 4; j++)
        {
            if(a[0] < a[j]) count++;
        }
        cout << count << endl;
    }
       
}