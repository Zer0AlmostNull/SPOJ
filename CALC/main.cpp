#include<iostream>

using namespace std;

int main()
{
    char c;
    int a, b;

    while(cin>>c>>a>>b)
    {
        if(c=='/')
            printf("%d\n",a/b);
        else if(c=='+')
            printf("%d\n",a+b);
        else if(c=='-')
            printf("%d\n",a-b);
        else if(c=='*')
            printf("%d\n",a*b);
        else if(c=='%')
            printf("%d\n",a%b);
    }

    return 0;
}