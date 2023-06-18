#include<iostream>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    unsigned int t;
    scanf("%d",&t);

    string tmp;
    while(t--)
    {
        cin>>tmp;

        for(int i=0; i<tmp.length()/2;i++ )
            printf("%c", tmp[i]);

        printf("\n");
    }

    return 0;
}