#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    if (number <= 2)
    {
        if (number == 0)
        {
            cout << "0\n";
        }
        else
        {
            cout << "NIE\n";
        }
    }
    else if (number % 2 != 0 && number > 2)
    {
        cout << number - number / 2 << " ";
        for (int i = 0; i < number / 2; i++)
        {
            cout << i << " " << number - i << " ";
        }
        cout << (number - number / 2) - 1 << "\n";
    }
    else
    {
        cout << number - number / 2 << " ";
        for (int i = 0; i < number / 2; i++)
        {
            cout << i << " " << number - i << " ";
        }
        cout << "\n";
    }

    return 0;
}
