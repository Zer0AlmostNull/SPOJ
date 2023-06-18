#include<iostream>
#include <cmath>

using namespace std;

bool is_prime(int x) {
    if (x < 2) {
        return false;
    }

    if (x == 2 || x == 3) {
        return true;
    }

    if (x % 2 == 0 || x % 3 == 0) {
        return false;
    }

    const int s = sqrt(x);
    for (int i = 5; i <= s; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int main()
{
    unsigned short test_count = 0;
    scanf("%d", &test_count);

    for(;test_count>0; test_count--)
    {
        // read intervals
        unsigned int min, max;
        scanf("%d %d", &min, &max);


        if (min == 1 && max > 1)
            min++;
        // if min value is even then add one
        if (min % 2 == 0)
        {   
            if(is_prime(min))
                printf("%d\n", min);
            min++;
        }

        for(unsigned int i = min; i <= max; i+=2)
        {
            if(is_prime(i))
                printf("%d\n", i);
        }
    }

    return 0;
}
