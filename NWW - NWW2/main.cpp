#include<bits/stdc++.h>

using namespace std;

unsigned long long int NWD(unsigned long long int a, unsigned long long int b)
{
    if(b!=0)
    	return NWD(b,a%b);
    return a;
}
unsigned long long int NWW(unsigned long long int a, unsigned long long int  b)
{
    return a / NWD(a, b) * b;
}

int main()
{
    int tests = 0;
    scanf("%d", &tests);

    for(int i=0; i<tests; i++)
    {
        int n = 0;
        scanf("%d", &n);

        unsigned long long int a = 0, answer = 1;
        for(int j =0; j<n; j++)
        {
            // get variable
            scanf("%llu", &a);

            answer = NWW(answer, a);
            //printf("%d\n", answer);
        }
        printf("%llu\n", answer);
    }

    return 0;
}