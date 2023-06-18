#include<iostream>

using namespace std;

int main()
{
    int x;
    bool p = true;
    while (cin >> x)
    {
        if (x==42)
            p = false;

        if (p)
            cout<<x<<"\n";
    }
    
    return 0;
}