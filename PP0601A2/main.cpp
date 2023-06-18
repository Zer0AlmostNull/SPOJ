#include <stdio.h>
 
int main()
{
    int liczba, ilosc=0,poprzednia=42;
    while(scanf("%d",&liczba)==1 && ilosc<3)
    {
        if(ilosc<3)printf("%d \n", liczba);
        if(liczba==42&&poprzednia!=42)ilosc++;
        poprzednia=liczba;
    }
    return 0;
}