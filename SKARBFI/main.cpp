#include<iostream>

using namespace std;

int main()
{
    unsigned int tests;
    scanf("%d",&tests);

    for (;tests>0; tests--)
    {
        int x=0, y=0;

        unsigned count=0;
        scanf("%d",&count);

        for(;count>0;count--)
        {
            unsigned direction=0, steps=0;
            scanf("%d %d",&direction, &steps);

            if (direction==0)// polnoc
                y += steps;
            else if (direction==1)//polodnie
                y -= steps;
            else if (direction ==2) // zachod
                x -= steps;
            else // wschod
                x += steps;
        }

        // printinggggggggg
        if (x == 0 &&  y != 0)
        {  
            if(y>0)// polnoc
                printf("0 %d\n", y);
            else // poludnie
                printf("1 %d\n",y * -1);
        }
        else if (y == 0 && x!=0)
        {
            if(x>0)// wschod
                printf("3 %d\n", x);
            else // zachod
                printf("2 %d\n", x* -1);
        } 
        else if (y == 0 && x == 0)
        {
            printf("studnia\n");
        }
        else
        {
            if(y>0)// polnoc
                printf("0 %d\n", y);
            else // poludnie
                printf("1 %d\n", y* -1);

            if(x>0)// wschod
                printf("3 %d\n", x);
            else // zachod
                printf("2 %d\n",x* -1);
        }


    }

    return 0;
}