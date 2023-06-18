#include <iostream>
#include<map>
#include<cstring>

using namespace std;

int main()
{
    map<char, int> literki;
    unsigned int times;
    string tmp;


    cin >> times;
    times ++;
    while(times--)
    {
        getline(cin, tmp);

        for (int i=0;i<tmp.length(); i++)
        {
            if(isalnum(tmp[i]))
                literki[tmp[i]]++;
        }

    }

    for (const auto& x: "abcdefghijklmnopqrstuvwxyz")
    {
        if (literki[x] != 0)
            cout << x <<" "<< literki[x] <<"\n";
    }

        for (const auto& x: "abcdefghijklmnopqrstuvwxyz")
    {
        if (literki[toupper(x)] != 0)
            cout << (char)toupper(x) <<" "<< literki[toupper(x)] <<"\n";
    }



}
