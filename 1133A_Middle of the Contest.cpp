#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h1, m1, h2, m2;
    string str1, str2, str3;
    cin >> str1 >> str2;
    h1 = (str1[0]- '0')*10 + (str1[1] - '0');
    m1 = (str1[3]- '0')*10 + (str1[4] - '0');
    h2 = (str2[0]- '0')*10 + (str2[1] - '0');
    m2 = (str2[3]- '0')*10 + (str2[4] - '0');
    int min;
    min = (h1*60) + m1 + (h2*60) + m2;
    min = min/2;
    h1 = min/60;
    m1 = min%60;
    int a, b, c, d;
    a = h1/10;
    b = h1%10;
    c = m1/10;
    d = m1%10;
    cout << a << b << ":"  << c << d << endl;   
}