#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int sum = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = i+1;
            sum += v[i];
        }
        if(sum%n != 0 or n == 1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            
        }
        else cout << "-1";
        cout << endl;
    }
       
}