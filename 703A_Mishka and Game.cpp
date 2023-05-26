#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, m = 0, c = 0;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        cin >> a >> b;
        if(a > b) m++;
        else if(a < b) c++;
    }
    if(m > c) cout << "Mishka\n";
    else if(m < c) cout << "Chris\n";
    else cout << "Friendship is magic!^^\n";
       
}