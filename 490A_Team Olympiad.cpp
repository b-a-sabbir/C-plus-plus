#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n], val[3] = {0}, num1[n] = {0}, num2[n] = {0}, num3[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if(ar[i] == 1) 
        {
            num1[val[0]] = i;
            val[0]++;
        }
        else if (ar[i] == 2) 
        {
            num2[val[1]] = i;
            val[1]++;
        }
        else
         {
            num3[val[2]] = i;
            val[2]++;
         }
    }
    sort(val, val+3);
    cout << val[0] << endl;
    for(int i = 0; i < val[0]; i++)
    {
        cout << num1[i] + 1 << " " << num2[i] + 1 <<  " " << num3[i] + 1 << endl;
    }
    
       
}