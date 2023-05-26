#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++)
    {
        cout << "I ";
        if(i%2 == 0) 
        {
            cout << "love ";
            if(i == n) break;
        }
        else if (i%2 > 0 || i == n)
        {
            cout << "hate ";
            if(i == n)break;
        } 
        cout << "that ";
    }
    cout << "it";
}