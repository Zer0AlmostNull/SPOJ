#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string t;
    while (getline(cin, t))
    {
        bool insideTag = false;

        for (int i = 0; i < t.length(); i++)
        {
            if (t[i] == '<')
            {
                insideTag = true;
            }
            else if (t[i] == '>')
            {
                insideTag = false;
            }

            if (insideTag && isalpha(t[i]))
            {
                t[i] = toupper(t[i]);
            }
        }

        cout << t << endl;
    }

    return 0;
}
