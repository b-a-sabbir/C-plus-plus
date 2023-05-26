#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int len = str.size(), tmp = 0;
    for (int i = 0; i < len; i++)
    {
        if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
        {
            tmp++;
        }
    }
    if(tmp > 0) cout << "YES\n";
    else cout << "NO\n";
    
}