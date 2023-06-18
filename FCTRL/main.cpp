#include<iostream>
#include<cmath>

using namespace std;

int V_s(int p, int n)
{
    int sum = 0;

    int i = 1, k=-1;
    while (true)
    {
        k = n / pow(p, i);
        if(k==0)
            break;
        sum += k;
        i++;
    }
    
    return sum;
}

int main()
{
    unsigned int test_count;
    scanf("%d", &test_count);

    for(;test_count>0; test_count--)
    {
        int n;
        scanf("%d", &n);
        
        printf("%d\n", V_s(5, n));

    }

}