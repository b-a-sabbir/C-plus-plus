#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin >> n;
    int a[n], one = 0, three = 0, four = 0;
    float two = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 1) one++;
        else if(a[i] == 2) two++;
        else if(a[i] == 3) three++;
        else four++;
    }
    int tin = 0, dui = 0;
    float ek = 0;
    if (three >= one)
    {
        tin = three;
    }
    else if ((one - three)*2 <= two)
    {
        dui = two;
    }
    else 
    {
        ek = ceil(one/4);
    }
    cout << ek+dui+tin+four << endl;
}