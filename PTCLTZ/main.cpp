#include<iostream>
using namespace std;

int main()
{
    unsigned int x, n, tests;
    scanf("%d", &tests);

    for ( ;tests>0; tests--)
    {
        n = 0;
        scanf("%d", &x);
        while (x != 1)
        {
            if(x%2==1)
                x = 3 * x + 1;
            else 
                x /= 2;
            n++;
        }
        printf("%d\n", n);
        
    }
    return 0;
}
