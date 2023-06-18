#include<iostream>
#include <vector> 

using namespace std;

int main()
{
    int n = -1;
    scanf("%d", &n);

    do{
        bool k = false;

        if (n<0)
            n*=-1, k=true;

        int size = 2*n;

        // process fuck 
        vector<vector<char>> arr(size, vector<char>(size));

        // default ?
        for (int i = 0; i < size; i++)
        {
		    for (int j = 0; j < size; j++)
            {
			    arr[i][j] = '?';
            }
        }

        // fuck recursion going iteration

        // I
        for(int y = 0; y<n; y++)
        {
            for(int x = 0; x<n; x++)
            {
                if(x < y+1)
                    arr[y][x] = '*';
                else
                    arr[y][x] = '.';
            }
        }
        
        // II
        for(int y = n-1; y >-1; y--)
        {
            for(int x = n; x < size; x++)
            {

                if(x+y-n<n)
                    arr[y][x] = '*';
                else
                    arr[y][x] = '.';
            }
        }

        // III
        for(int y = n; y<size; y++)
        {
            for(int x = n; x<size; x++)
            {
                if(x+1 > y)
                    arr[y][x] = '*';
                else
                    arr[y][x] = '.';
            }
        }

        // IV
        for(int y = size-1; y > n-1; y--)
        {
            for(int x = 0; x < n; x++)
            {
                
                
                if(x+y>2*(n-1))
                    arr[y][x] = '*';
                else
                    arr[y][x] = '.';
            }
        }
        
        // show. print fuck
        if (!k)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    printf("%c", arr[i][j]);
                }
                printf("\n");
            }
            printf("\n");
        }
        else
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = size-1; j >-1; j--)
                {
                    printf("%c", arr[i][j]);
                }
                printf("\n");
            }
            printf("\n");
        }

        scanf("%d", &n);
    }while(n != 0);

    return 0;
}