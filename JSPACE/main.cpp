#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string inputString;

    while (getline(cin, inputString))
    {
        for (unsigned int i = 0; i < inputString.size(); i++)
        {
            if (isspace(inputString[i]))
            {
                inputString[i] = 0;
                inputString[i + 1] = toupper(inputString[i + 1]);
            }
        }

        for (unsigned int i = 0; i < inputString.size(); i++)
        {
            if (inputString[i] != 0)
            {
                cout << inputString[i];
            }
        }

        cout << "\n";
    }

    return 0;
}
