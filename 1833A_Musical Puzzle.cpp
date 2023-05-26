#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int count = 0;
        string str;
        cin >> str;
        int a[7][7] = {0};
        for (int i = 0; i < n-1; i++)
        {
            a[str[i] - 'a'][str[i+1] - 'a']++;
        }
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                if(a[i][j] > 0) count++;
            }
            
        }
        cout << count << endl;
    }
       
}