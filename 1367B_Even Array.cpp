#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int a[n], count, odd = 0, perfect = 0, place = n/2;
        for(int j = 0; j<n; j++)
        {
          cin >> a[j];
          if(a[j]%2 == 1) 
          {
            odd++;
            if(j%2 == 1)
            {
              perfect++;
            }
          }
        }
        if(place > odd || odd > place) cout << "-1\n";
        
        else cout << odd - perfect << endl;
    }
    
}