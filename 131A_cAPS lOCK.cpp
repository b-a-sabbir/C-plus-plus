#include <bits/stdc++.h>
using namespace std;
int main()
{   
    string str;
    cin >> str;
    int len = str.size(), cap = 0, small = 0;
    for (int i = 0; i < len; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z') cap++;
        else small++;
    }
    for (int i = 0; i < len; i++)
    {
        if ((small == 1 && str[0] >= 'a' && str[0] <= 'z') || cap == len)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                //cout << toupper(str[i]);
                printf("%c", toupper(str[i]));
            }
            else printf("%c", tolower(str[i]));
            
        }
        else
        {
            cout << str << endl;
            break;
        }
    }
    
}