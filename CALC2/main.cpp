#include<iostream>

using namespace std;

int main()
{
    int tab[10];

    char c;
    int a,b;

    while(cin>>c>>a>>b)
    {
        if (c=='z')
            tab[a] = b;
        else if (c=='+')
            printf("%d\n", tab[a]+tab[b]);
        else if (c=='-')
            printf("%d\n", tab[a]-tab[b]);
        else if (c=='*')
            printf("%d\n", tab[a]*tab[b]);
        else if (c=='/')
            printf("%d\n", tab[a]/tab[b]);
        else if (c=='%')
            printf("%d\n", tab[a]%tab[b]);
    }

    return 0;
}