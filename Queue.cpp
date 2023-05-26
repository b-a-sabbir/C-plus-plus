#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, front = -1, back = -1;
    cout << "Enter the size ";
    cin >> n;
    int a[n], option, value;
    while(1)
    {
    cout << "Option: \n1.insert \n2.delete \n3.display \n4.Exit\n";
    cin >> option;
    if(option == 1)
    {
        if(back == n-1) cout << "Overflow\n";
        else if(front == -1 && back == -1)
        {
            front = 0;
            back = 0;
        }
        else 
        {
            back++;
            
        }
        cout << "Enter value: ";
        cin >> value;
        a[back] = value;
        cout << "Value inserted\n";
    } 
    else if (option == 2)
    {
        if (back == -1 || back < front)
        {
            cout << "Underflow\n";
        }
        else 
        {
            front++;
            cout << "Value deleted\n";
        }
        
    }
    else if (option == 3)
    {
        if(back == -1 || front == -1 || front > back) cout << "Underflow\n";
        else
        {
            cout << "Values are >> \n";
            for (int i = front; i <= back; i++)
            {
                cout << a[i] << endl;
            }
            
        }
        
    }
    else if (option == 4)
    {
        return 0;
    }
    else cout << "Enter a valid number\n";
    }
}