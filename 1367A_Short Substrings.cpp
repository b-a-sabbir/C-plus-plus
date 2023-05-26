#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string str;
        cin >> str;
        int len = str.size();
        for (int j = 0; j < len; j++)
        {
            if (j%2 == 0)
            {
                cout << str[j];
                
            }
            
        }
        cout << str[len-1] << endl;
    }
       
}