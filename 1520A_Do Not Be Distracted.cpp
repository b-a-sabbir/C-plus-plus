#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, count;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string str;
        cin >> n;
        cin >> str;
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (str[j] != str[j+1])
            {
                for (int k = j+1; k < n; k++)
                {
                    if (str[j] == str[k])
                    {
                        count++;
                        break;
                    }
                    
                }
                
            }
            
        }
        if(count >= 1) cout << "NO\n";
        else cout << "YES\n";

    }
       
}