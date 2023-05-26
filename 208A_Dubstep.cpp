#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int count = 0, tmp = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]  == 'W' && str[i+1] == 'U' && str[i+2] == 'B')
        {
            i += 2;
            if(count > tmp) cout << " ";
            tmp = count;
        }
        else
        {
            cout << str[i];
            count++;
        } 
    }
       
}