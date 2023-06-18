#include <iostream>

int main()
{
    int numCities;
    long long totalProfit = 0;
    long long maxProfit = 0;

    std::cin >> numCities;

    while (numCities--)
    {
        int profit;
        std::cin >> profit;
        totalProfit += profit;

        if (totalProfit > maxProfit)
        {
            maxProfit = totalProfit;
        }

        if (totalProfit < 0)
        {
            totalProfit = 0;
        }
    }

    std::cout << maxProfit << std::endl;

    return 0;
}
