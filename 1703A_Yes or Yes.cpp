#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> str;
        if(tolower(str[0]) == 'y' && tolower(str[1]) == 'e' && tolower(str[2]) == 's') cout << "YES\n";
        else cout << "NO\n";
    }
       
}