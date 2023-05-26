#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4], tmp = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            if(a[i] == a[j]) tmp++;
        }
    }
    if(tmp == 6) cout << tmp - 3 << endl;
    else if(tmp == 3) cout << tmp - 1 << endl;
    else cout << tmp << endl;
}