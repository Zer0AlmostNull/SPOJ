#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    
    while (testCases--)
    {
        int points;
        cin >> points;
        
        vector<int> numbers;
        int number;
        int counter = 0;
        int maximum = 0; // maximum number
        
        for (int i = 0; i < points; i++)
        {
            cin >> number;
            numbers.push_back(number);
            
            if (number > maximum)
            {
                maximum = number;
            }
        }
        
        sort(numbers.begin(), numbers.end());
        
        for (int i = numbers.size() - 1; i >= 0; i--)
        {
            if (numbers[i] == maximum)
            {
                cout << numbers[i] << " ";
                counter++; // number of occurrences of the maximum number
            }
            else
            {
                break;
            }
        }
        
        for (int i = 0; i < numbers.size() - counter; i++) // subtract the number of occurrences of the maximum number from the size of the vector
        {
            cout << numbers[i] << " ";
        }
        
        cout << '\n';
    }
    
    return 0;
}
