#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        count = 0;
        string str, cf = "codeforces";
        cin >> str;
        for (int i = 0; i < 10; i++)
        {
            if(str[i] != cf[i]) count++;
        }
        cout << count << endl;
        
    }
    
}