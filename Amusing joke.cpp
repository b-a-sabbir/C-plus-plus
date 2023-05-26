#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2, str3, str4;
    cin >> str1 >> str2 >> str3;
    int len1, len2, len3;
    len1 = str1.size();
    len2 = str2.size();
    len3 = str3.size();
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    sort(str3.begin(), str3.end());
    str4 = str1 + str2;
    sort(str4.begin(), str4.end());
    if(str4 == str3) cout << "YES\n";
    else cout << "NO\n";
}