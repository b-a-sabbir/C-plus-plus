#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y, mid;
    cin >> n;
    mid = n/2;
    if (n%2 == 0 ) 
    {
        x = mid;
        y = mid;
    }    
    else
    {
        x = mid+1;
        y = mid;  
    }
    while(1)
        {
            
            if ((x%2 == 0 || x%3 == 0 || x%5 == 0) && (y%2 == 0 || y%3 == 0 || y%5 == 0) && (x !=5 && y !=5))
            {
                cout << x << " " << y << endl;
                break;
            }
            x++;
            y--;
        }
}