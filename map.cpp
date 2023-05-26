#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> m;  
    m[1] = "one";
    m[2] = "two";
    m[3] = "three";
    //its print in sorted order
    m.insert({5, "five"});
    
    cout << "before erase " << endl;
    for(auto i:m)
    {
        cout << i.first << " " << i.second << endl;
    } 

    //cout << "finding 5  -> " << m.count(5) << endl;
    //cout << "finding 5  -> " << m.count(-5) << endl;

    m.erase(5);
    cout << "after erase " << endl;
    for(auto i:m)
    {
        cout << i.first << " " << i.second << endl;
    }
}