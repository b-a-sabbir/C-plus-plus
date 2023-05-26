#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, untreated = 0, police = 0;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if(ar[i] > 0) police += ar[i];
        else if(ar[i] < 0) 
        {
            ar[i] = police + ar[i];
            if(ar[i] >= 0)police--;
            else untreated++;
        }

    }
    cout << untreated << endl;
}