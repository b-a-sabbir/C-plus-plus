#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int len = str.size();
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '-' && str[i+1] == '-')
        {
            cout << "2";
            i++;
        }
        else if (str[i] == '-' && str[i+1] == '.')
        {
            cout << "1";
            i++;
        }
        else
        {
            cout << "0";
        }
        
    }
       
}