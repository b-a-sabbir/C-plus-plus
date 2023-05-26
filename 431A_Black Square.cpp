#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4], count = 0, tmp = 0;
    for (int i = 0; i <4; i++)
    {
        cin >> a[i];
    }
    string str;
    cin >> str;
    int len = str.size();
    for (int i = 0; i <len; i++)
    {
        tmp = str[i] - '0';
        count = count + a[tmp-1];
    }
    cout << count << endl;
       
}