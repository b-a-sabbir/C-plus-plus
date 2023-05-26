#include <bits/stdc++.h>
using namespace std;

bool checkEven(int a[], int n)
{
    for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if(a[i]%2 == 0 or abs(a[i] - a[j])%2 == 0)
                {
                    break;
                }
                else return false;
            }
            
        }
        return true;
}

bool checkOdd(int a[], int n)
{
    for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if(a[i]%2 == 1 or abs(a[i] - a[j])%2 == 1)
                {
                    break;
                }
                else return false;
            }
            
        }
        return true;
}

bool checkPossibility(int a[], int n)
{
    sort(a, a+n);
    if(a[0] % 2 == 0) 
    {
        int test = checkEven(a, n);
        if(test == true) return true;
    }
    else 
    {
        int test = checkOdd(a, n);
        if(test == true) return true;
    }
    return false;
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] % 2 == 0) even++;
            else odd++;
        }
        bool test = false;
        if(even == n || odd == n) cout << "YES\n";
        else 
        {
            test = checkPossibility(a, n);
            if(test == true) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    
}