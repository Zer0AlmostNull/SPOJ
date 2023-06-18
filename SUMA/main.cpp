#include<iostream>

using namespace std;

int main()
{
    int sum = 0, tmp;

    while (cin>>tmp)
    {
        sum += tmp;
        printf("%d\n",sum);
    }


    return 0;
}