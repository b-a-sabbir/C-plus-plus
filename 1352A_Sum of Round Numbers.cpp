#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int count = 0, len;
        string str;
        cin >> str;
        len = str.size();
        for (int j = 0; j < len; j++)
        {
            if(str[j] != '0') 
            {
                count++;
            }
        }
        cout << count << endl;
        for (int j = 0; j < len; j++)
        {
            int value;
            value = str[j] - '0';
            if (value == 0)
            {
                continue;
            }
            else
            {
                cout << value*pow(10, len-(j+1)) << " ";
            }
            
        }
        cout << endl;
        
    }
    
}