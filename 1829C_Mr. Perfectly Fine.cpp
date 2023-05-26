#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, one = pow(10, 6), two = pow(10, 6), three = pow(10, 6);
        cin >> n;
        int a, s1 = 0, s2 = 0, mini1 = pow(10, 6), mini2 = pow(10, 6), mini3 = pow(10, 6);
        string str;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> str;
            if (str[0] == '1' && str[1] == '1')
            {
                s1++;
                s2++;
                one = a;
                mini3 = min(mini3, one);
            }
            
            else if(str[0] == '1')
            {
                s1++;
                two = a;
                mini1 = min(mini1, two);
            } 
            else if(str[1] == '1')
            {
                s2++;
                three = a;
                mini2 = min(mini2, three);
            }
            

        }
        if(s1 > 0 && s2 > 0) cout << min((mini1 + mini2), mini3) << endl;
        else cout << "-1\n";
    }
       
}